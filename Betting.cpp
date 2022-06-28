#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    double t = 100;    
    cin >> n;
    double op1 = t / n;
    double op2 = t / (t - n);
    cout.precision(4);
    cout << op1 << endl << op2 << endl;
    return 0;
}