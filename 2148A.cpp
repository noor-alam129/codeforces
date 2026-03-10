#include<iostream>
using namespace std;
int main(){
    int test,x,n ;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>x>>n;
        (n%2==0)?cout<<0<<endl:cout<<x<<endl;
    }
    return 0;
}