// https://codeforces.com/problemset/problem/2151/A
/*
#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int q=0;q<test;q++){
        int n,count=0,a;
        cin>>n>>a;
        int arr[a];
        for(int l=0;l<a;l++){
            cin>>arr[l];
        }
    
        int arrn[(n*(n+1)/2)],index=0;
        for(int i=1;i<=n;i++){       //outer loop
            for(int j=1;j<=i;j++){     //inner loop
                arrn[index]=j; 
                // cout<<arr[j];
                index++;
            }
        }


        for(int i = 0; i <= (n*(n+1)/2 - a); i++){
        int j;
            for(j = 0; j < a; j++){         
                if(arrn[i+j] != arr[j]){
                    break;
                }
            }
            if(j == a){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}*/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }

    bool is_strictly_increasing = true;
    for (int i = 0; i < m - 1; ++i) {
        if (a[i] >= a[i + 1]) {
            is_strictly_increasing = false;
            break;
        }
    }

    if (!is_strictly_increasing) {
        cout << 1 << endl;
    } else {
        int r = a[m - 1];
        cout << static_cast<long long>(n) - r + 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
