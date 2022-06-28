#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string number;
    for(int i = 0;i < n;i++){
        cin >> number;
        for(int j = number.length() - 1;j >= 0;j--){
            if(number[j] == '0'){
                continue;
            }
            number[j] -= 1;
            break;
        }
        cout << stoi(number) << endl;
    }
    return 0;
}
