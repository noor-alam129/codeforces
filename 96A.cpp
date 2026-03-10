// https://codeforces.com/problemset/problem/96/A
#include<iostream>
using namespace std;
int main(){
    string in;
    cin>>in;
    int sum=0;
    for(int i=0;i<=in.size();i++){
        if(in[i]==in[i+1]){
            sum++;
        }
        if(in[i]!=in[i+1]){
            sum=0;
        }
        if(sum>=6){
            break;
        }
    }

    (sum>=6)?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}