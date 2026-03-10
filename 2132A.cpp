//https://codeforces.com/problemset/problem/2132/A
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //initializing the number of test cases
    int test;
    cin>>test;

    for(int i=1;i<=test;i++){

        int alen,blen;
        string a,b,c;
        cin>>alen>>a>>blen>>b>>c;

        //running the code blen amount of time
        for(int i=0;i<blen;i++){
            if(c[i]=='D')
            {
                a=a+b[i];//append the i number character of string b to end of a
            }
            else
            {
                a=b[i]+a;//append the i number of character of string b to beginning of a
            }
        }

       cout<<a<<endl;
    }

    return 0;
}