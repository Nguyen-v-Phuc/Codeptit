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

    for(int i = 0; i < n; i++) {
        auto itter = upper_bound(temp.begin(), temp.end(), v[i]);
        if(itter == temp.end()) {
            cout << "_ ";   
        }
        else {
            cout << *itter << " ";
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