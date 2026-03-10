
// https://codeforces.com/problemset/problem/318/A

//  #include <iostream>
// using namespace std;
// int main(){
//     long long k,n,a=0;
//     cin>>k;
//     long long arr[k];

//     for (int i = 1; i <= k; ++i) {
//         if (i % 2 != 0) {
//             arr[a]= i;
//             a++;
//         }
//     }



//     for (int i = 1; i <= k; ++i) {
//         if (i % 2 == 0) {
//             arr[a]= i ;
//             a++;
//         }
//     }

//     cin>>n;
//     cout<<arr[n-1]<<endl;


//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2; 

    if (k <= oddCount) {
        cout << 2 * k - 1 << endl;   
    } else {
        cout << 2 * (k - oddCount) << endl; 
    }

    return 0;
}
