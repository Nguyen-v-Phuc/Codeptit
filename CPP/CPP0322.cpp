#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

string add(string a, string b) {
    ll carry = 0, sum;
    string ans;
    
    for(int i = 0; i < max(a.size(), b.size()); i++) {
        if(a.size() == b.size()) break;
        else if(a.size() < b.size()) {
            a = '0' + a;
        }
        else {
            b = '0' + b;
        }
    }

    ans = a;
    for(int i = a.size() - 1; i >= 0; i--) {
        sum = a[i] - '0' + b[i] - '0' + carry;
        carry = sum / 10;
        ans[i] = (sum % 10) + '0'; 
    }
    if(carry == 1) ans = '1' + ans;
    return ans;
}

void Grind()
{
    string a, b;
    cin >> a >> b;

    cout << add(a, b) << "\n";
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