#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
        }
        else {
            for(int j = n - 1; j >= 0; j--) {
                cout << mat[i][j] << " ";
            }
        }
    }

    cout << "\n";
}

signed main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        grind();
    }

    return 0;
}