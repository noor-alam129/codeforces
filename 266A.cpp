#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    string n;
    cin>>n;
    int sum=0;
    for(int i=0;i<a;i++){
        if(n[i]==n[i+1]){
            sum++;
        }
    }
    cout<<sum;
    return 0;
}