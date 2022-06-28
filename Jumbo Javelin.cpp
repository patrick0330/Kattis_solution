#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 1;
    for(int i = 0;i < n;i++){
        int num;
        cin >> num;
        total = total + num - 1;
    }
    cout << total << endl;
    return 0;
}