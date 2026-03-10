#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n1, n2;
    cin >> n1 >> n2;
    transform(n1.begin(), n1.end(), n1.begin(), ::toupper);
    transform(n2.begin(), n2.end(), n2.begin(), ::toupper);
    if(n1 == n2){
        cout << 0 << endl;
    }
    else if(n1 > n2){
        cout << 1 << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}