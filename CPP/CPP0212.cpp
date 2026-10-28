#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void Grind()
{
    int n, x;
    cin >> n >> x;

    ll res = 0;
    while(n--) {
        int a;
        cin >> a;

        res = (res * x + a) % MOD;
    }

    cout << res << "\n";
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        Grind();
    }
    return 0;
}