#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int check = 0,swi = 1;
    for(int i = 0;i < s.length();i++){
        if(check){
            cout << s[i];
        }
        if(s[i] == 'a' && swi == 1){
            cout << s[i];
            check = 1;
            swi = 0;
        }
    }
    cout << endl;
    return 0;
}