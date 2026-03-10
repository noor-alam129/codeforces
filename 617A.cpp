#include<iostream>
// 617A.cpp
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum;
    sum =a/5;
    if (a%5!=0){
        sum++;
    }   
    cout<<sum<<endl;
    return 0;
}