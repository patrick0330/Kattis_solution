#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> ss;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        ss.push_back(s);
    }
    for(int i = 0;i < n;i += 2){
        cout << ss[i] << endl;
    }
    return 0;
}