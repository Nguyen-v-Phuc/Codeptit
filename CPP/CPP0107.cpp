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
    unsigned n;
    string s;
    cin >> n;

    string ans101 = "ABBADCCABDCCABD";
    string ans102 = "ACCABCDDBBCDDBB";
    double score = 0;

    if(n == 101) {
        FOR(i, 0, 15) {
            char x;
            cin >> x;
            if (x == ans101[i]) {
                score += 10.0 / 15.0;
            }
        }
    }

    else {
        FOR(i, 0, 15) {
            char x;
            cin >> x;
            if (x == ans102[i]) {
                score += 10.0 / 15.0;
            }
        }
    }

    cout << fixed << setprecision(2) << score << "\n";
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