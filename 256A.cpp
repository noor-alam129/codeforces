#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int extra = 0;

    for (int i = 1; i < n; i++) {
        int need = k - (a[i-1] + a[i]);
        if (need > 0) {
            a[i] += need;   
            extra += need; 
        }
    }

    cout << extra << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}





/*
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int l=n*(k/2);
    int a[n],m=0,sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m+=a[i];
    }
   
    if(l>=m){
        cout<<0<<endl;
        for(int i=0;i<n;i++){
        cout<<a[i];
        }
    }

    else if(l<m){

        for(int i=0;i<n;i++){
            a[i]++; 
            sum++;
            for(int k=0; k<n; k++){
                if(a[k]==l){
                    break;
                }
            }

        }
        cout <<sum<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
        
    } 

    return 0;
}
*/