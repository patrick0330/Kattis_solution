#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int alpha[26] = {0};

    for(int i = 0;i < s.length();i++){
        alpha[s[i] - 'a'] ++;

    }
    int oddcount = 0;
    for(int i = 0;i < 26;i++){
        if(alpha[i] % 2 == 1){
            oddcount++;
        }
    }
    if(oddcount < 1){
        cout << 0 << endl;
    }
    else{
        cout << oddcount - 1 << endl;
    }
    return 0;
}
