#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,ss;
    cin >> s;
    ss = s;
    next_permutation(ss.begin(),ss.end());
    if(ss > s){
        cout << ss << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}
