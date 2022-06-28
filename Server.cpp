#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int num ,counter = 0,ans = 0;
    for(int i = 0;i < n;i++){
        cin >> num;
        counter += num;
        if(counter <= m){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}
