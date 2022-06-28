#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int new_a = 0,new_b = 0;
    new_a += (a / 100) % 10 + (a % 10) * 100 + (a / 10) % 10 * 10;
    new_b += (b / 100) % 10 + (b % 10) * 100 + (b / 10) % 10 * 10;
    if(new_a > new_b){
        cout << new_a << endl;
    }
    else{
        cout << new_b << endl;
    }
    
    return 0;
}
