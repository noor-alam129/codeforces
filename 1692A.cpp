#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    for(int i =0; i<test;i++){
    int a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;
    if(a<b){
        sum++;
    }
    if (a<c){
        sum++;
    }
    if (a<d){
        sum++;
    }
    cout<<sum<<endl;
    }

    return 0;
}