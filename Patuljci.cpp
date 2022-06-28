#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> dw;
    int num,sum = 0;
    int dw_num[9] = {0};
    for(int i = 0;i < 9;i++){
        cin >> num;
        sum += num;
        dw.push_back(num);
    }
    for(int i = 0;i < 9;i++){
        for(int j = 0;j < 9;j++){
            if(i != j){
                if(sum - dw[i] - dw[j] == 100){
                    dw_num[i] = 1;
                    dw_num[j] = 1;
                }
                else{
                    continue;
                }
            }
        }
    }
    for(int i = 0;i < 9;i++){
        if(dw_num[i] == 1){
            continue;
        }
        cout << dw[i] << endl;
    }

    return 0;
}