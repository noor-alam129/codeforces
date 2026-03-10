#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int a, sum = 0;
    if(!(cin >> a)) return 0;
    string s;
    if(!(cin >> s)) return 0;

    for (auto &x : s) x = char(toupper((unsigned char)x));

    for (int i = 0; i + 1 < (int)s.size(); ++i) {
        if (s[i] == s[i+1]) ++sum;
    }

    cout << (sum == 0 ? "YES" : "NO");
    return 0;
}