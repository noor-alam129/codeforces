// https://codeforces.com/problemset/problem/344/A
#include<iostream>
using namespace std;
int main(){
    int test,sum=0;
    cin>>test;
    int a[test];
    for(int i=0;i<test;i++){
        cin>>a[i];
    }

    for(int i=0;i<test;i++){
        if(a[i]!=a[i+1]){
            sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}