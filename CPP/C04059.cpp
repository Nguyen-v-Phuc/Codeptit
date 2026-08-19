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

unsigned long long F[93];

void prepare() {
    F[1] = 1;
    F[2] = 1;
    for (int i = 3; i < 93; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;

    FORE(i, a, b) {
        cout << F[i];
        if(i == b) cout << "";
        else cout << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    prepare();
    
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
    
    //cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}