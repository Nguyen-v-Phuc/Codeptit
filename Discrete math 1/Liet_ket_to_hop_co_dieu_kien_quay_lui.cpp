#include <bits/stdc++.h>
using namespace std;

int n, k, t, X[10001] = {};
void print()
{
    for(int i = 1; i <= k; i++) {
        cout << X[i] << " ";
    }
    cout << "\n";
}

void Try(int i)
{
    for(int j = X[i - 1] + 1; j <= n - k + i; j++) {
        X[i] = j;
        if(i == k) {
            if(X[k] == t) {
                print();
            }
        }
        else {
            Try(i + 1);
        }
    }
}

int main() 
{
    cin >> n >> k >> t;
    Try(1);
    return 0;
}