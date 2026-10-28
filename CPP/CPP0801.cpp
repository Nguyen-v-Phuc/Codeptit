#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ifstream fin("PTIT.in");

    ofstream fout("PTIT.out");

    if(fin.is_open() && fout.is_open()) {
        string s;
        while(getline(fin, s)) {
            fout << s << "\n";
        }
    }

    fin.close();
    fout.close();
    return 0;
}