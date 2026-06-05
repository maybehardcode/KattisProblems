#include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    
        string dna, virus;
        cin >> dna >> virus;
    
        int n = dna.size();
        int m = virus.size();
    
        int pref = 0;
        while (pref < n && pref < m && dna[pref] == virus[pref]) {
            pref++;
        }
    
        int suff = 0;
        while (suff < n - pref && suff < m - pref &&
               dna[n - 1 - suff] == virus[m - 1 - suff]) {
            suff++;
        }
    
        cout << m - pref - suff << '\n';
    
        return 0;
    }