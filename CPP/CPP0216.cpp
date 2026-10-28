#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void Grind()
{
    int n, l, r;
    vector<int> v(n);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> l >> r;
    int i = l;

    while(i < r && v[i] <= v[i+1]) {
        i++;
    }
    while(i < r && v[i] >= v[i+1]) {
        i++;
    }
    if(i == r) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

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