#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while(num > 9){
        int cur = num;
        int sum = 1;
        while(cur > 0){
            if(cur % 10 > 0){
                sum *= (cur % 10);
            }
            cur /= 10;
        }
        num = sum;
    }
    cout << num << endl;
    return 0;
}
