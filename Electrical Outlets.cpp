#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int k;
        cin >> k;
        int total = 0;
        for(int j = 0;j < k;j++){
            int ele;
            cin >> ele;
            total += ele;
        }
        cout << total - (k - 1) << endl;
    }
    
    return 0;
}
