#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int guest;
        cin >> guest;
        vector<long long> inv;
        for(int j = 0;j < guest;j++){
            long long num;
            cin >> num;
            inv.push_back(num);
        }
        sort(inv.begin(), inv.end());
        int check = 1;
        for(int j = 0;j < inv.size() / 2;j++){
            if(inv[2 * j] != inv[2 * j + 1]){
                cout << "Case #" << i + 1 << ": " << inv[2 * j] << endl;
                check = 0;
                break;
            }
        }
        if(check){
            cout << "Case #" << i + 1 << ": " << inv.back() << endl;
        }
    }
    return 0;
}
