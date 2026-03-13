#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i = 0 ; i < a ; i++){
        cin>>arr[i];
    }

    // Initialize min and max with the first element of the array
    int minI = 0;
    int maxI = 0;;

    for (int i = 0; i < a; i++) {

        if (arr[i] > arr[maxI]) {
            maxI = i;          // first maximum
        }

        if (arr[i] <= arr[minI]) {
            minI = i;          // last minimum
        }

    }

    
    int sum = maxI + (a - 1 - minI );
    
    if(maxI > minI){
        sum--;
    }


    cout<<sum<<endl;

    

    return 0;
}