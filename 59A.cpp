#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char le[101];
    cin>>le;
    int a = strlen(le);
    int f=0;
    for(int i=0;i<a;i++){
        if(le[i]>='a'&&le[i]<='z'){
            f++;
        }
    }
    int s=0;
    for(int i=0;i<a;i++){
        if(le[i]>='A'&&le[i]<='Z'){
            s++;
        }
    }
    if(f>=s){
        for(int i=0;i<a;i++){
            if(le[i]>='A'&&le[i]<='Z'){
                le[i]=le[i]+32;
            }
           
        }
    }
    else{
        for(int i=0;i<a;i++){
            if(le[i]>='a'&&le[i]<='z'){
                le[i]=le[i]-32;
            }
           
        }
    }
    cout<<le<<endl;
     
    return 0;
}
