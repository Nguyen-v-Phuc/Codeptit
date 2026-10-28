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

    int l = 0, r = n - 1;
    vector<int> res;

    while(l <= r) {
        if(l == r) {
            res.push_back(v[r]);
            break;
        }

        res.push_back(v[r]);
        res.push_back(v[l]);
        l++;
        r--;
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