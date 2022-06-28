#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g,t,n;
    cin >> g >> t >> n;
    int items = 0;
    for(int i = 0;i < n;i++){
        int weight;
        cin >> weight;
        items += weight;
    }
    int cancarry = (g - t) * 0.9 - items;
    cout << cancarry << endl;
    return 0;
}