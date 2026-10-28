#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;

    while(h1 < h2 && c1 < c2) {
        int prev = mat[h1 + 1][c1];

        for(int i = c1; i <= c2; i++) {
            int curr = mat[h1][i];
            mat[h1][i] = prev;
            prev = curr;
        }
        h1++;

        for(int i = h1; i <= h2; i++) {
            int curr = mat[i][c2];
            mat[i][c2] = prev;
            prev = curr;
        }
        c2--;

        if(h1 <= h2) {
            for(int i = c2; i >= c1; i--) {
                int curr = mat[h2][i];
                mat[h2][i] = prev;
                prev = curr;
            }
            h2--;
        }

        if(c1 <= c2) {
            for(int i = h2; i >= h1; i--) {
                int curr = mat[i][c1];
                mat[i][c1] = prev;
                prev = curr;
            }
            c1++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
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