#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < k; i++) {
        bool exist = next_permutation(v.begin(), v.end());
        if(!exist) {
            cout << 0 << "\n";
        }
        else {
            for(int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << "\n";    
        }
    }
}