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
#define ALL(v) (v).begin(), (v).end()
#define sz(s) (ll)(s).length() // use for string

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> v1(a), v2(b), v3(c);
    FORLL(i, 0, a) cin >> v1[i];
    FORLL(i, 0, b) cin >> v2[i];
    FORLL(i, 0, c) cin >> v3[i];

    ll i = 0, j = 0, k = 0;
    bool found = false;

    // three pointers technique:
    while(i < a && j < b && k < c) {
        if(v1[i] == v2[j] && v2[j] == v3[k]) {
            cout << v1[i] << " ";
            found = true;
            i++;
            j++;
            k++;
        }
        else if(v1[i] < v2[j]) i++;
        else if(v2[j] < v3[k]) j++;
        else k++;
    }
    if(found == false) cout << "-1";
    cout << "\n";
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