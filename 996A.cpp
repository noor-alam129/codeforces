// https://codeforces.com/problemset/problem/996/A
#include<iostream>
using namespace std;
int main(){
    int many, sum = 0;
    cin >> many;

    sum += many / 100;
    many %= 100;

    sum += many / 20;
    many %= 20;

    sum += many / 10;
    many %= 10;

    sum += many / 5;
    many %= 5;

    sum += many / 1;
    many %= 1;

    cout << sum << endl;
    return 0;
}
