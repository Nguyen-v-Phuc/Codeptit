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

bool check1(int n)
{
    int last = 10;

    while(n > 0) {
        int curr = n % 10;
        if(curr >= last) {
            return false; 
        }
        last = curr;
        n /= 10;
    }
    return true;
}

bool check2(int n)
{
    int target = n % 10;
    while(n > 0) {
        int curr = n % 10;
        
        if(curr != target) return false;
        n /= 10;
    }

    return true;
}

bool check3(int n)
{
    vector<int> ok(5);
    while(n > 0) {
        int digit = n % 10;
        ok.pb(digit);
        n /= 10;
    }
    reverse(ALL(ok));

    FOR(i, 0, 5) {
        if((ok[0] == ok[1] && ok[1] == ok[2]) && (ok[3] == ok[4])) return true;
    }
    return false;
}

bool check4(int n)
{   
    while(n > 0) {
        int digit = n % 10;
        if(digit != 6 && digit != 8) {
            return false;
            break;
        }
        n /= 10;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;

    s.erase(0, 5);
    s.erase(remove(s.begin(), s.end(), '.'), s.end());

    string clean = "";
    for (char c : s) {
        if (isdigit(c)) {
            clean += c;
        }
    }
    int n = stoi(clean);
    
    cout << ((check1(n) || check2(n) || check3(n) || check4(n)) ? "YES" : "NO") << "\n";
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