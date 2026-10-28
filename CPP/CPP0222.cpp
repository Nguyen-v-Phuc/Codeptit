#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void Grind()
{
    int n;
    cin >> n;
    map<int, int> cnt;

    for(int i = 0; i < n; i++) {
        set<int> st;
        for(int j = 0; j < n; j++) {
            int x;
            cin >> x;
            st.insert(x);
        }

        for(int val : st) {
            cnt[val] ++;
        }
    }

    int res = 0;
    for(auto &[a, b] : cnt) {
        if(b == n) res++;
    }

    cout << res << "\n";
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