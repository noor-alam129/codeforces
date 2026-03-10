#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool space = false;

    for (int i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (space) cout << " ";
            space = false;
            i += 3;
        } else {
            cout << s[i];
            space = true;
            i++;
        }
    }
    return 0;
}
