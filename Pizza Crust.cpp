#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,r;
    cin >> r >> c;
    int p = r - c;
    double squ_r = r * r;
    double squ_p = p * p;
    cout.precision(10);
    cout << squ_p / squ_r * 100.0 << endl;
    return 0;
}

