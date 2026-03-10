#include<iostream>
#include<string>
// 734A.cpp
using namespace std;
int main(){
    int f;
    cin>>f;
    

    string game;
    cin>>game;

    int a=0,d=0;
    for (int i = 0; i <f; i++) {
        if (game[i] == 'A') 
            a++;
        else if (game[i] == 'D') 
            d++;
    }

    if(a<d){
        cout<<"Danik"<<endl;
    }
    else if(a>d){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}