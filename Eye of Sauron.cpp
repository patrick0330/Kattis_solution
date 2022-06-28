#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int left_count = 0,right_count = 0;
    int left = 1,right = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '('){
            left = 0;
            right = 1;
        }
        if(left == 1 && s[i] == '|'){
            left_count++;
        }
        else if(right == 1 && s[i] == '|'){
            right_count++;
        }
    }
    if(left_count != right_count){
        cout << "fix" << endl;
    }
    else{
        cout << "correct" << endl;
    }
    
    return 0;
}
