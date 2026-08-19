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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    FORLL(i, 0, n) {
        cin >> v[i];
    }
    ll sum = 0;
    int min_len = n + 1;
    int left = 0;
    FOR(right, 0, n) {
        sum += v[right];

        while(sum > k) {
            min_len = min(min_len, right - left + 1);
            sum -= v[left];
            left++;
        }
    }

    if(min_len == n + 1) {
        cout << "-1\n";
    }
    else {
        cout << min_len << "\n";
    }
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
    
    return 0;
    cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
}