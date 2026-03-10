#include<iostream>
// 268A codeforce
using namespace std;
int main(){
    int a;
    int sum=0;
    cin>>a;
    int arr[a],arr2[a];
    for(int i=1;i<=a;i++){
        cin>>arr[i]>>arr2[i];
    }

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(arr[i]==arr2[j]){
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}