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
using ld = long double;
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define u_map unordered_map
#define u_set unordered_set

const int INF = 2e9;
const ll INFLL = 2e18;
#define esp 1e-9
#define PI 3.14159265
const ll MOD = 1000000007LL;

#define pb push_back
#define eb emplace_back
#define pop pop_back
#define ALL(v) (v).begin(), (v).end()
#define sz(s) (ll)(s).length() // use for string

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[8] = {0, 0, -1, 1, -1, 1, -1, 1};
void dfs(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& visited, int n, int m) {
    visited[r][c] = true;

    for (int i = 0; i < 8; ++i) {
        int nr = r + dx[i];
        int nc = c + dy[i];

        if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
            if (grid[nr][nc] == 1 && !visited[nr][nc]) {
                dfs(nr, nc, grid, visited, n, m);
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    int cnt = 0;

    FOR(i, 0, n) {
        FOR(j, 0, m) {
            cin >> A[i][j];
        }
    }
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    FOR(i, 0, n) {
        FOR(j, 0, m) {
            if(A[i][j] == 1 && !visited[i][j]) {
                cnt++;
                dfs(i, j, A, visited, n, m);
            }
        }
    }

    cout << cnt << "\n";
}

signed main()
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