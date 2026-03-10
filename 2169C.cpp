#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long Sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            Sum += a[i];
        }

        long long bestGain = 0;

        // try all subarrays (easy version)
        for (int l = 0; l < n; l++) {
            long long subSum = 0;
            for (int r = l; r < n; r++) {
                subSum += a[r];

                long long len = r - l + 1;
                long long newSum = len * ( (l+1) + (r+1) ); // 1-based index
                long long gain = newSum - subSum;

                if (gain > bestGain) {
                    bestGain = gain;
                }
            }
        }

        cout << Sum + bestGain << endl;
    }

    return 0;
}
