#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

bool palindrome(string &s)
{
    int l = 0;
    int r = s.length() - 1;

    while(l <= r) {
        if(s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void Grind()
{
    string s;
    cin >> s;
    string res;
    for(char &c : s) {
        c = tolower(c);
    }

    for(char c : s) {
        if(c == 'a' || c == 'b' || c == 'c') {
            res += '2';
        }
        else if(c == 'd' || c == 'e' || c == 'f') {
            res += '3';
        }
        else if(c == 'g' || c == 'h' || c == 'i') {
            res += '4';
        }
        else if(c == 'j' || c == 'k' || c == 'l') {
            res += '5';
        }
        else if(c == 'm' || c == 'n' || c == 'o') {
            res += '6';
        }
        else if(c == 'p' || c == 'q' || c == 'r' || c == 's') {
            res += '7';
        }
        else if(c == 't' || c == 'u' || c == 'v') {
            res += '8';
        }
        else {
            res += '9';
        }
    }

    if(palindrome(res)) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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