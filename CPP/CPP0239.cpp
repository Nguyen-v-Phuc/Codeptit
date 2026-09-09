/*
         _______
        /       /_
       /  -/-  / /
      /   /   / /
     /_______/ /         Matthew 19:26
    ((______| /   'With man, this is impossible,
     `'''''''`       but with God, all things are possible'
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 1e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265
const ll MOD = 1e9 + 7;
#define pb push_back
#define eb emplace_back

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

int get_rank(vector<vector<double>> mat, int n, int m) {
    int rank = 0;
    vector<bool> row_selected(n, false);

    FOR(col, 0, m) {
        int pivot_row = -1;
        FOR(row, 0, n) {
            if(!row_selected[row] && abs(mat[row][col]) > esp) {
                pivot_row = row;
                break;
            }
        }

        if(pivot_row != -1) {
            ++rank;
            row_selected[pivot_row] = true;

            FOR(row, 0, n) {
                if(row != pivot_row && abs(mat[row][col]) > esp) {
                    double factor = mat[row][col] / mat[pivot_row][col];
                    FOR(i, col, m) {
                        mat[row][i] -= factor * mat[pivot_row][i];
                    }
                }
            }
        }
    }
    return rank;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<double>> mat(n, vector<double>(m));

    FOR(i, 0, n) {
        FOR(j, 0, m) {
            cin >> mat[i][j];
        }
    }
    cout << get_rank(mat, n, m) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }

    cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}