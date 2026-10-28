#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime(int n)
{
    if(n <= 1) return false;
    int root = sqrt(n);
    for(int i = 2; i <= root; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

ll sum(int n)
{
    ll res = 0;
    while(n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int smith(int n)
{
    ll sum_factors = 0;
    ll sum_digits_factor = 0;
    ll x = sum(n);
    ll temp = n;

    for(int i = 2; i <= sqrt(temp); i++) {
        while(temp % i == 0) {
            sum_digits_factor += sum(i);
            temp /= i;
        }
    }

    if(temp != 1) {
        sum_digits_factor += sum(temp);
    }
    if(temp == n) return 0;
    if(sum_digits_factor == x) return 1;
    return 0;
}

void grind()
{
    int n;
    cin >> n;

    if(prime(n)) {
        cout << "NO\n";
        return;
    }

    if(smith(n)) {
        cout << "YES\n";
    }

    else {
        cout << "NO\n";
    }
}

signed main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        grind();
    }

    return 0;
}