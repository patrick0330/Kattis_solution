#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long p = 2;
    for(int i = 0;i < n;i++){
        p = p * 2 - 1;
    }
    long long ans = pow(p,2);
    cout << ans << endl;
    return 0;
}

