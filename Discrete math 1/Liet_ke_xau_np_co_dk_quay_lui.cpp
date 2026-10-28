#include <bits/stdc++.h>
using namespace std;

int n, k, u, v;
int X[10001] = {};
bool isFixed[1001];
int val[1001];

void print()
{
    for(int i = 1; i <= n; i++) {
        cout << X[i] << " ";
    }
    cout << "\n";
}

void Try(int i)
{
    if(i > n) {
        print();
        return;
    }
    if(isFixed[i]) {
        X[i] = val[i];
        Try(i+1);
    }

    else {
        for(int j = 0; j <= 1; j++) {
            X[i] = j;
            Try(i+1);
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    while(k--) {
        cin >> u >> v;
        isFixed[u] = true;
        val[u] = v;
    }
    Try(1);
    return 0;
}