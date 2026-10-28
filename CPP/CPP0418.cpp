#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];

    vector<int> uni;
    uni.insert(uni.end(), a.begin(), a.end());
    uni.insert(uni.end(), b.begin(), b.end());
    sort(uni.begin(), uni.end());

    set<int> u(uni.begin(), uni.end());
    for(int i : u) {
        cout << i << " ";
    }
    cout << "\n";

    set<int> sa(a.begin(), a.end());
    set<int> intersect;
    for(int i : b) {
        if(sa.count(i)) {
            intersect.insert(i);
        }
    }
    for(int i : intersect) {
        cout << i << " ";
    }
    cout << "\n";
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