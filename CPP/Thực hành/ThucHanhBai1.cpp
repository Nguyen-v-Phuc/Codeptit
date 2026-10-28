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

class PhanSo
{
    private:
        ll tu, mau;

    public:
        PhanSo(ll t = 1, ll m = 1) {
            tu = t;
            mau = m;
        }
        friend istream& operator >> (istream& in, PhanSo& p) {
            in >> p.tu >> p.mau;
            return in;
        }

        void rutgon() {
            ll u = GCD(tu, mau);

            tu /= u;
            mau /= u;
        }

        friend ostream& operator << (ostream& out, const PhanSo& p) {
            out << p.tu << "/" << p.mau;
            return out;
        }
};

int main()
{   
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;

    return 0;
}