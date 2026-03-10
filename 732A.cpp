#include <iostream>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;

    for (int x = 1; x <= 10; ++x) {
        int total_cost = k * x;
        int last_digit = total_cost % 10;
        
        if (last_digit == 0 || last_digit == r) {
            cout << x <<endl;
            return 0;
        }
    }
    

    return 0;
}
