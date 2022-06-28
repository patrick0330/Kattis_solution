#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,b;
    long long total = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> b;
        total += pow(b / 10,b % 10);
    }
    cout << total << endl;
    return 0;
} 