#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<int> va, vb;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] == 1) {
            va.push_back(i+1);
        }
    }
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == 1) {
            vb.push_back(i+1);
        }
    }
    /*
    for(int i = 0; i < va.size(); i++) {
        cout << va[i] << " ";
    }
    cout << "\n";
    for(int i = 0; i < vb.size(); i++) {
        cout << vb[i] << " ";
    }
    */
    set<int> st(va.begin(), va.end());
    set<int> intersect;

    for(int i : vb) {
        if(st.count(i)) {
            intersect.insert(i);
        }
    }

    cout << intersect.size() << "\n";
    for(int i : intersect) {
        cout << i << " ";
    }

    return 0;
}