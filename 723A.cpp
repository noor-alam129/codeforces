// https://codeforces.com/problemset/problem/723/A
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    d=-((arr[0]-arr[1])+(arr[1]-arr[2]));
    cout<<d<<endl;

}