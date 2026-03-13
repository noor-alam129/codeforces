#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s1;
    int x;

    for(int i = 0; i < 4; i++){
        cin >> x;
        s1.insert(x);
    }

    cout << 4 - s1.size() << endl;

    return 0;
}