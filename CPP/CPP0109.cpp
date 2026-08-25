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

bool check(int n)
{
    int even = 0;
    int odd = 0;

    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0) even++;
        else odd++;
        n /= 10;
    }

    if(even == odd) return true;
    else return false;
}

void solve()
{
    int n;
    cin >> n;

    int low = pow(10, n-1);
    int high = pow(10, n) - 1;

    int line = 0;
    FORE(i, low, high) {
        if(check(i)) {
            cout << i << " ";
            line++;
            if(line % 10 == 0) cout << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //int tc;
    //cin >> tc;
    //while(tc--) {
    solve();
    //}

    cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}