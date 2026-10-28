#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
unordered_map<string, int> mp;

void Grind()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string c;
    vector<string> v;
    

    while(ss >> c) {
        for(char &x : c) {
            x = tolower(x);
        }
        v.push_back(c);
    }

    if(v.empty()) return;
    string email = v.back();
    
    for(int i = 0; i < v.size()-1; i++) {
        email += v[i][0];
    }
    mp[email]++;

    if(mp[email] == 1) {
        cout << email << "@ptit.edu.vn";
    }
    else {
        cout << email << mp[email] << "@ptit.edu.vn";
    }
    cout << "\n";
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        Grind();
    }
    return 0;
}