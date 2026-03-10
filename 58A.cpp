#include<iostream>
#include <string>
using namespace std;
int main(){
    string n,a="hello";
    cin>>n;
    int sum;
    int j=0;
    for(int i=0;i<n.size();i++){
        if (a[j]==n[i]){

            j++;
        }
        if(j==a.size()){break;}
    }
    if (j==a.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    return 0;
}