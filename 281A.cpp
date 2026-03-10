#include<iostream>
#include<string>
// 281A
using namespace std;
int main(){
    string name;
    getline(cin,name);

    name[0]=toupper(name[0]);
    cout<<name<<endl;

    return 0;
}