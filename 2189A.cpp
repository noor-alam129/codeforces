#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, h, l;
        cin >> n >> h >> l;

        int row_count = 0, col_count = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x <= h) row_count++;
            if(x <= l) col_count++;
        }

        cout << min(row_count, col_count) << endl;
    }

    return 0;
}
