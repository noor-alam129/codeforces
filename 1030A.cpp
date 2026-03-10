#include<iostream>
using namespace std;
int main(){
    int a,sum=0;
    cin>>a;
    int arr;
    for(int i=0;i<a;i++){
        cin>>arr;
        sum+=arr;
    }
    if (sum==0){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }

}