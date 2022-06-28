#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    string result;
    for(int i = 0;i < str.length();i++){
        if(str[i] == '<'){
            if(result.length() != 0){
                result.pop_back();
            }

        }
        else{
            result += str[i];
        }
    }
    cout << result << endl;
    return 0;
}
