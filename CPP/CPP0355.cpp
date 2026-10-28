#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

void Grind()
{
    string in;
    string word, s;
    vector<string> v;

    while(getline(cin, in)) {
        stringstream ss(in);

        while(ss >> word) {
            if(!s.empty()) {
                s += " ";
            }
            s += word;
        }
    }
    
    for(char &c : s) {
        c = tolower(c);
    }

    stringstream ss_all(s);
    string token;
    vector<string> sentence;

    while(ss_all >> token) {
        char last = token.back();
        
        // Nếu từ có chứa dấu ngắt câu (. ! ?)
        if(last == '.' || last == '!' || last == '?') {
            token.pop_back(); // Xóa dấu ngắt câu đi
            if(!token.empty()) {
                sentence.push_back(token);
            }

            // In câu hoàn chỉnh
            if(!sentence.empty()) {
                sentence[0][0] = toupper(sentence[0][0]); // Viết hoa chữ cái đầu câu
                
                for(int i = 0; i < sentence.size(); i++) {
                    cout << sentence[i] << (i == sentence.size() - 1 ? "" : " ");
                }
                cout << "\n";
                
                sentence.clear(); // Xóa mảng để sang câu tiếp theo
            }
        }
        else {
            sentence.push_back(token);
        }
    }

    cerr << s << "\n";
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Grind();

    return 0;
}