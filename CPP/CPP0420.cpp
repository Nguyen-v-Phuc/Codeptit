#include <bits/stdc++.h>
using namespace std;

int k;
bool cmp(int a, int b)
{
    return abs(a - k) < abs(b - k);
}

void grind()
{
    int n;
    cin >> n >> k;
    vector<int> v(n), temp(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
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