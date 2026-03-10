#include <iostream>
#include <string>
// 133A.cpp
using namespace std;
int main(){
    string p;
    cin>>p;
    int sum=0;
    for(int i=0;i<p.length();i++){
        (p[i]=='H' || p[i]=='Q' || p[i]=='9')?sum++: sum;
    }
    if(sum==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}