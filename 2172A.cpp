#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;
    for(int i=0;i<3;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    // If the range between max and min is <= 10, accept and print middle
    if (v[2] - v[0] < 10) {
        cout << "final " << v[1] << endl;
    } else {
        cout << "check again" << endl;
    }


    return 0;
}