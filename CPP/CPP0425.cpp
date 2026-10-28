#include <bits/stdc++.h>
using namespace std;

void grind()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<int> res(n);
    int idx = 0;

    for(int i = 0; i < n; i += 2) {
        res[i] = v[idx++];
    }
    for(int i = 1; i < n; i += 2) {
        res[i] = v[idx++];
    }

    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        grind();
    }
    return 0;
}