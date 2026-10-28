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
using ull = unsigned long long;
using ld = long double;
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)

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

struct GiangVien
{
    string ma, hoTen, ten, bm;
    int id;
};

string vietTat(string s)
{
    stringstream ss(s);
    string word, res = "";

    while(ss >> word) {
        res += toupper(word[0]);
    }
    return res;
}

string layTen(string s)
{
    stringstream ss(s);
    string word;
    while(ss >> word) {
    }
    return word;
}

bool cmp(const GiangVien &a, const GiangVien &b)
{
    if(a.ten != b.ten) {
        return a.ten < b.ten;
    }
    return a.id < b.id;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    vector<GiangVien> ds(n);

    FOR(i, 0, n) {
        ds[i].id = i + 1;

        if(ds[i].id < 10) {
            ds[i].ma = "GV0" + to_string(ds[i].id);
        }
        else {
            ds[i].ma = "GV" + to_string(ds[i].id);
        }

        string tenBoMon;
        getline(cin, ds[i].hoTen);
        getline(cin, tenBoMon);
        ds[i].ten = layTen(ds[i].hoTen);
        ds[i].bm = vietTat(tenBoMon);
    }
    sort(ds.begin(), ds.end(), cmp);

    for(int i = 0; i < n; i++) {
        cout << ds[i].ma << " " << ds[i].hoTen << " " << ds[i].bm << "\n";
    }
    return 0;
}