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

bool pal(string s)
{
    if (s.length() <= 1) return false;

    int l = 0;
    int r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool compare(pair<string, int> a, pair<string, int> b) // so sanh 2 so theo giam dan
{
    if(a.first.length() != b.first.length()) {
        return a.first.length() > b.first.length();
    }

    return a.first > b.first;
}

void solve()
{
    string s;
    unordered_map<string, int> map;

    while(cin >> s) {
        if(pal(s)) {
            map[s]++;
        }
    }

    vector<pair<string, int>> v(map.begin(), map.end());
    sort(v.begin(), v.end(), compare); // them compare vi ham compare giam dan

    for(auto x : v) {
        cout << x.first << " " << x.second << "\n";
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
    
    //cerr << "\nTime elapsed: " << 1000 * clock()/CLOCKS_PER_SEC << "ms";
    return 0;
}