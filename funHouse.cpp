#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int w, h;
    int caseNum = 1;
    while (cin >> w >> h && (w != 0 || h != 0)) {
        vector<string> grid(h);
        int sr = -1, sc = -1;
        for (int i = 0; i < h; i++) {
            cin >> grid[i];
            for (int j = 0; j < w; j++) {
                if (grid[i][j] == '*') {
                    sr = i;
                    sc = j;
                }
            }
        }
        
        int r = sr, c = sc;
        int dr = 0, dc = 0;
        if (sr == 0) dr = 1, dc = 0;           // top wall, go south (down)
        else if (sr == h - 1) dr = -1, dc = 0; // bottom wall, go north (up)
        else if (sc == 0) dr = 0, dc = 1;      // left wall, go east (right)
        else if (sc == w - 1) dr = 0, dc = -1; // right wall, go west (left)
        
        while (true) {
            r += dr;
            c += dc;
            if (grid[r][c] == 'x') {
                grid[r][c] = '&';
                break;
            } else if (grid[r][c] == '/') {
                if (dr == 1 && dc == 0) { dr = 0; dc = -1; }      // south -> west
                else if (dr == -1 && dc == 0) { dr = 0; dc = 1; } // north -> east
                else if (dr == 0 && dc == 1) { dr = -1; dc = 0; } // east -> north
                else if (dr == 0 && dc == -1) { dr = 1; dc = 0; } // west -> south
            } else if (grid[r][c] == '\\') {
                if (dr == 1 && dc == 0) { dr = 0; dc = 1; }       // south -> east
                else if (dr == -1 && dc == 0) { dr = 0; dc = -1; } // north -> west
                else if (dr == 0 && dc == 1) { dr = 1; dc = 0; }  // east -> south
                else if (dr == 0 && dc == -1) { dr = -1; dc = 0; } // west -> north
            }
            // '.' or '*' just continue in same direction
        }
        
        cout << "HOUSE " << caseNum++ << "\n";
        for (int i = 0; i < h; i++) {
            cout << grid[i] << "\n";
        }
    }
    return 0;
}
