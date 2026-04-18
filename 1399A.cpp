#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--) {
        int a;
        cin >> a;
        vector<int> arr(a);

        for (int i = 0; i < a; ++i) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        bool ok = true;
        for (int i = 1; i < a; ++i) {
            if (arr[i] - arr[i - 1] > 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}