#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr=0,a,b,mx=0;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        arr=(arr-a)+b;
        if(arr>mx){
            mx=arr;
        }

    }
    cout<<mx<<endl;
    
    
}