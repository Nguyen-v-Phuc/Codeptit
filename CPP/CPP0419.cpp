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
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    set<int> uni;
    uni.insert(a.begin(), a.end());
    uni.insert(b.begin(), b.end());
    for(int i : uni) {
        cout << i << " ";
    }
    cout << "\n";

    set<int> intersect;
    set<int> sa(a.begin(), a.end());
    for(size_t i : b) {
        if(sa.count(i)) {
            cout << i << " ";
        }
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