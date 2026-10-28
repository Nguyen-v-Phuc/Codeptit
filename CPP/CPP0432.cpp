#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string& a, string& b)
{
    return a + b > b + a;
}

void grind()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    string res;
    for(int i = 0; i < n; i++) {
        res += v[i];
    }
    cout << res << "\n";
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