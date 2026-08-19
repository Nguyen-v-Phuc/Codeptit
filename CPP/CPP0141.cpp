#include <bits/stdc++.h>
using namespace std;

using i128 = __int128_t;

// Kiểm tra x có phải số chính phương không
bool isPerfectSquare(i128 x) {
    if (x < 0) return false;

    i128 l = 0, r = 3000000000000000000LL;

    while (l <= r) {
        i128 mid = (l + r) / 2;
        i128 sq = mid * mid;

        if (sq == x) return true;
        if (sq < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return false;
}

bool isFibonacci(long long n) {
    i128 x = n;

    return isPerfectSquare(5 * x * x + 4) ||
           isPerfectSquare(5 * x * x - 4);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

        cout << (isFibonacci(n) ? "YES" : "NO") << '\n';
    }

    return 0;
}
