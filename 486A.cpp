
// https://codeforces.com/problemset/problem/486/A

#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2 << endl;
    else
        cout << -(n + 1) / 2 << endl;

    return 0;
}


// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
 
//     if(a%2==0){
//         int b=a/2;
//         cout<<b<<endl;
//     }
//     else{
//         int c=-(a+1)/2;
//         cout<<c<<endl;
//     }
//     return 0;
// }
