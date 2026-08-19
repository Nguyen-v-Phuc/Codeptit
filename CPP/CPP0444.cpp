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
    int n, key;
    cin >> n >> key;
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];

    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        if(v[mid] == key) {
            cout << mid + 1 << "\n";
            return;
        }

        if(v[mid] >= v[l]) {
            if(key >= v[l] && key < v[mid]) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        else {
            if(key <= v[r] && key > v[mid] ) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
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
    
    //cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}