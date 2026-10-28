#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] *= v[i];
    }
    sort(v.begin(), v.end());
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            ll target = v[i] + v[j];

            auto find = lower_bound(v.begin() + j + 1, v.end(), target);
            if(find != v.end() && *find == target) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

signed main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        grind();
    }

    return 0;
}