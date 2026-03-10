#include<iostream>
using namespace std;
int main(){
    int dx,dy,r=0,k;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>k;
            if(k==1){
            dx=i,dy=j;
            }
        }
    }
    r=abs(dx-3)+abs(dy-3);
    cout<<r<<endl;
    
}