#include <bits/stdc++.h>
using namespace std;

int n, k, u, v;
bool used[1000001];
int X[1000001];
bool found = false;
map<int, int> fixedPos;

void print()
{
    for(int i = 1; i <= n; i++) {
        cout << X[i] << " ";
    }
    cout << "\n";
    return;
}

void Try(int i)
{
    if(i > n) {
        found = true;
        print();
        return;
    }

    if(fixedPos.find(i) != fixedPos.end()) {
        v = fixedPos[i];

        if(!used[v]) {
            X[i] = v;
            used[v] = true;
            Try(i + 1);
            used[v] = false;
        }
    }
    else {
        for(int j = 1; j <= n; j++) {
            if(!used[j]) {
                X[i] = j;
                used[j] = true;
                Try(i + 1);
                used[j] = false;
            }
        }
    }
}

int main() 
{
    cin >> n >> k;
    while(k--) {
        cin >> u >> v;
        fixedPos[u] = v;
    }

    Try(1);
    if(!found) {
        cout << 0 << "\n";
        return 0;
    }
    return 0;
}