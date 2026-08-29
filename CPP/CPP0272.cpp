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
const long long MOD = 1e9 + 7;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= 1000000007;
    while(exp > 0) {
        if(exp % 2 == 1) res = (res * base) % 1000000007;
        base = (base * base) % 1000000007;
        exp /= 2;
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    FORLL(i, 0, n) cin >> v[i];

    ll tich = 1;
    FORLL(i, 0, n) {
        tich = (tich * v[i]) % MOD;
    }

    ll res = v[0];
    FORLL(i, 0, n) {
        res = GCD(res, v[i]);
    }

    cout << power(tich, res) << "\n";
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