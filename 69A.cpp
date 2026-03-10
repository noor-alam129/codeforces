#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int x[a],y[a],z[a];
    int m=0,n=0,o=0;
    for(int i=0;i<a;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i=0;i<a;i++){
        m+=x[i];
        n+=y[i];
        o+=z[i];
    }
    if(m==0&&n==0&&o==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}