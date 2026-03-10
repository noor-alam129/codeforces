#include <iostream>
#include <string>
using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;

    if (n1.length() != n2.length()) {
        cout << "NO" << endl;
        return 0;
    }

    int n = n1.length();

    
    for(int i = 0, j = n - 1; i < n; i++, j--){
        if(n1[i] != n2[j]){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
