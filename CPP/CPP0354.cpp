#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void Grind()
{
    string s;
    cin >> s;

    int cnt = 1;
    for(int i = 1; i < s.length(); i++) {
        
        if(s[i] == s[i-1]) {
            cnt++;
        }
        else {
            cout << s[i - 1] << cnt;
            cnt = 1;
        }
    }

    cout << s[s.length() - 1] << cnt << "\n";
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