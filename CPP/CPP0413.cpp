#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int l = 0;
    int r = n - 1;

    if(n % 2 == 0) {
        while(l <= r) {
            cout << v[r] << " ";
            cout << v[l] << " ";

            l++;
            r--;
        }
    }
    else {
        while(l < r) {
            cout << v[r] << " ";
            cout << v[l] << " ";

            l++;
            r--;
        }

        if(l == r) {
            cout << v[r] << " ";
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

//1 3 4 8
//1 2 3 4 6