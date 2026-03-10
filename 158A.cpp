#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n+1]; // 1-based indexing for convenience
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    int cutoff = a[k];  // k-th contestant's score
    int count = 0;

    for(int i=1; i<=n; i++){
        if(a[i] >= cutoff && a[i] > 0){     //arr[i]>0 or a[k]>=a[i]
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
