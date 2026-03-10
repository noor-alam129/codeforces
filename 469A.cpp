#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;
    int arr1[p];

    for(int i = 0; i < p; i++) {
        cin >> arr1[i];
    }

    int q;
    cin >> q;
    int arr2[q];

    for(int i = 0; i < q; i++) {
        cin >> arr2[i];
    }

    set<int> s;

    for(int i = 0; i < p; i++) {
        s.insert(arr1[i]);
    }
    for(int i = 0; i < q; i++) {
        s.insert(arr2[i]);
    }

    if(s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
