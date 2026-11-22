#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
/*
    DFS(u):
     mark u as visited

     for each neighbor v of u:
         if v is not visited:
             DFS(v)
 */
// r and c is grid location / pixel (row and column)
// const reference to stars, which is 1-1 grid from input
// reference to visited, which is same size as stars but bool, all initialized to false
void DFS(int r, int c, const vector<vector<char>>& stars, vector<vector<bool>>& visited) {
    // int rows, int cols) {// for grid size, rows and cols
// because i dont want to double add to count, I am going to check the first node and add to count from outside this function
// this definitely seems naive, but will work for now.
    // star not visited! check all adjacent pixels
        //count +=1; maybe not here, maybe after.
        visited[r][c] = 1; // mark the pixel as visited. I checked before making the DFS call that it was not visited.

        if ( (c+1) < stars[r].size() && visited[r][c+1] == 0 && stars[r][c+1] == '-') {
            DFS(r, c+1, stars, visited);
        }
        if ( (r+1) < stars.size() && visited[r+1][c] == 0 && stars[r+1][c] == '-') {
            DFS(r+1, c, stars, visited);
        }
        if (c-1 >= 0 && visited[r][c-1] == 0 && stars[r][c-1] == '-') {
            DFS(r, c-1, stars, visited);
        }
        if (r-1 >= 0 && visited[r-1][c] == 0 && stars[r-1][c] == '-') {
            DFS(r-1, c, stars, visited);
        }
}

int solve(int rows, int cols) {
    int count = 0;

    // int rows, cols;
    // cin >> rows >> cols;

    vector<vector<char>> grid(rows, vector<char>(cols));
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    for (int i = 0; i < rows; i++) { //height
        for (int j = 0; j < cols; j++) { //width
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == '-') {
                if (!visited[i][j]) {
                    count+=1;
                    DFS(i, j, grid, visited);
                }
            }
        }
    }

    return count;
}

int main() {
    string coordinates;
    int testCases = 0;
    while (getline(cin, coordinates)) {
        stringstream ss(coordinates);
        int rows, cols;
        ss >> rows >> cols;
        //cout << "coordinates: " << coordinates << '\n';
        // cout << "rows:" << rows << " cols:" << cols << '\n';
        int count = solve(rows, cols);
        cin.ignore(1, '\n');
        testCases ++;
        cout << "Case " << testCases <<": " << count << endl;
    }
    return 0;
}
