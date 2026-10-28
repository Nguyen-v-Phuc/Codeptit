#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    int n;
    cin >> n;
    vector<int> v(n), temp(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    temp = v;
    sort(temp.begin(), temp.end());

    int l = 0, r = n - 1;
    while(l < r && v[l] == temp[l]) {
        l++;
    }
    while(r > 0 && v[r] == temp[r]) {
        r--;
    }

    if(l < r) {
        cout << l + 1 << " " << r + 1 << "\n";
    }
    else {
        cout << 0 << " " << 0 << "\n";
    }
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