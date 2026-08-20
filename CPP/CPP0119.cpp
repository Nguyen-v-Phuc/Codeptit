#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 2e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

vector<int> uoc(int n)
{
    vector<int> u;

    FORE(i, 1, sqrt(n)) {
        if(n % i == 0) {
            u.push_back(i);
            if(i != n / i) {
                u.push_back(n/i);
            }
        }
    }

    sort(u.begin(), u.end());

    return u;
}

void solve()
{
    int n;
    cin >> n;
    
    int cnt = 0;
    vector<int> ans = uoc(n);

    FOR(i, 0, ans.size()) {
        if(ans[i] % 2 == 0) cnt++;
    }

    cout << cnt << "\n";
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
