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

bool prime(int n)
{
    if(n < 2) return false;

    int root = sqrt(n);
    FORE(i, 2, root) {
        if(n % i == 0) return false;
    }
    return true;
}

bool check(int n)
{
    int cnt = 0;

    FORE(i, 2, n) {
        if(n % i == 0 && prime(i)) {
            cnt++;
            n /= i;

            if(n % i == 0) return false;
            if(cnt > 3) return false;
        }
    }

    return cnt == 3;
}

void solve()
{
    int n;
    cin >> n;

    cout << check(n) << "\n";
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