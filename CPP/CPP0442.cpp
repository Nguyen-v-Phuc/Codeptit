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
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    FOR(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end());

    int left = 0;
    int right = n - 1;
    bool found = false;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(v[mid] == target) {
            cout << "1\n";
            found = true;
            break;
        }
        else if(v[mid] < target) left = mid + 1;

        else right = mid - 1;
    }

    if(!found) {
        cout << "-1\n";
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
}