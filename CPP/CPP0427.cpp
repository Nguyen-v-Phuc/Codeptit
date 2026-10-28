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

    for(int i = 1; i <= n; i++) {
        if(v[i] == v[i-1]) {
            v[i-1] *= 2;
            v[i] = 0;
        }
    }

    std::stable_partition(v.begin(), v.end(), [](int n) {
        return n != 0;
    });


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