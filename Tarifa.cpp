#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    cin >> x >> n;
    int store = 0;
    for(int i = 0;i < n;i++){
        int p;
        cin >> p;
        store += (x - p);
    }
    cout << store + x << endl;
}