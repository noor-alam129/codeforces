#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,sum=0;
    cin>>a>>b;

    vector<int> arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    for(int i=0;i<a;i++){
        sum += arr[i] / b;
        if(arr[i] % b != 0){
            sum++;
        } 
    }
    cout <<sum<<endl;

    return 0;
}