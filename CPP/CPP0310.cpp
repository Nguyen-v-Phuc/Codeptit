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
    string a, b;
    cin >> a >> b;

    string min_a = a;
    string min_b = b;
    string max_a = a;
    string max_b = b;

    replace(min_a.begin(), min_a.end(), '6', '5');
    replace(min_b.begin(), min_b.end(), '6', '5');
    replace(max_a.begin(), max_a.end(), '5', '6');
    replace(max_b.begin(), max_b.end(), '5', '6');

    cout << stoll(min_a) + stoll(min_b) << " " << stoll(max_a) + stoll(max_b);
    cout << "\n";
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
}