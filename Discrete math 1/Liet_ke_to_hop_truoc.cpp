#include <bits/stdc++.h>
using namespace std;

int X[10001] = {};
int n, k;

void init()
{
    for(int i = 1; i <= k; i++) {
        cin >> X[i];
    }
}

void print()
{
    for(int i = 1; i <= k; i++) {
        cout << X[i] << " ";
    }
    return;
}

int main() 
{
    cin >> n >> k;
    init();

    int i = k;
    while(i > 0 && X[i] == X[i-1] + 1) {
        i--;
    }
    if(i == 0) {
        cout << 0;
        return 0;
    }
    else {
        X[i]--;
        for(int j = i + 1; j <= k; j++) {
            X[j] = n - k + j;
        }
        print();
    }

    return 0;
}