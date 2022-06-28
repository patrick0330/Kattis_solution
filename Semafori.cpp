#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;
    cin >> n >> l;
    int p[n], r[n], g[n];
    for(int i = 0;i < n;i++){
        cin >> p[i] >> r[i] >> g[i];
    }
    int totaltime = 0;
    int pos = 0;
    for(int i = 0;i < n;i++){
        int time = r[i] + g[i];
        totaltime += p[i] - pos;
        pos = p[i];
        if(totaltime % time < r[i]){
            totaltime += r[i] - totaltime % time;
        }
    }
    totaltime += l - pos;
    cout << totaltime << endl;
    return 0;
}
