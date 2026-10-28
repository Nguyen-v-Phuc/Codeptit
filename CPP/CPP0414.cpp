#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    set<ll> check;
    for(ll i = 0; i < n; i++) {
        if(v[i] == 0) {
            continue;
        }

        while(v[i] > 0) {
            ll digit = v[i] % 10;
            check.insert(digit);
            v[i] /= 10;
        }
    }

    for(ll i : check) {
        cout << i << " ";
    }

    cout << "\n";
}

int main() 
{
    int t;
    cin >> t;
    while(t--) {
        grind();
    }

    return 0;
}

//1 3 4 8
//1 2 3 4 6