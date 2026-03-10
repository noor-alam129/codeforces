#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int arr[a], arr2[a];

    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < a; j++){
        int sum = 0, num = arr[j];
        while(num > 0){
            sum += num % 10;  
            num /= 10;        
        }
        arr2[j] = sum;
    }

    
    for(int i = 0; i < a; i++){
        cout << arr2[i] << endl;
    }

    return 0;
}
