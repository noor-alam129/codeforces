#include<iostream>
// https://codeforces.com/contest/1996/problem/A
using namespace std;

int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int a,sum=0;
        cin>>a;
        if(a%2!=0){
            cout<<sum<<endl;
        }
        else{
            if(a%4==0){
                sum++;
            }
        while(a>0){
            if(a>=4){
                a -= 4;
                sum++;
            }
            else if(a>=2){
                a -= 2;
                sum++;
            }
            else {
                break;
            }
        }
        cout<<sum<<endl;
        }  
    }

    return 0;
}