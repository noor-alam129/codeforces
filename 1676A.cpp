#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        int s1,s2;

        s1=s[0]+s[1]+s[2];
        s2=s[3]+s[4]+s[5];

        if(s1==s2){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
    }
    return 0;
}