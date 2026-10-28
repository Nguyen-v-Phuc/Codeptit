#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void grind()
{
    string in;
    getline(cin, in);

    stringstream ss(in);
    string word, s;
    while(ss >> word) {
        if(!s.empty()) {
            s += " ";
        }
        s += word;
    }
    //cerr << s << "\n";

    for(char &c : s) {
        c = tolower(c);
    }
    //cerr << s << "\n";
    s[0] = toupper(s[0]);

    for(int i = s.length() - 1; i > 0; i--) {
        if(s[i] == ' ') {
            s.insert(i, ",");
            break;
        }
    }
    //cerr << s << "\n";

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            s[i+1] = toupper(s[i+1]);
        }
    }
    //cerr << s << "\n";

    int pos = s.find(',');
    if(pos != string::npos) {
        for(int i = pos + 2; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
}

signed main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while(t--) {
    grind();
    //}

    return 0;
}