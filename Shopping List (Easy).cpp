#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    map<string ,int> li;
    map<string, int> :: iterator iter;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            string s;
            cin >> s;
            iter = li.find(s);
            if(iter != li.end()){
                li[s] ++;
            }
            else{
                li[s] = 1;
            }
        }
    }
    int ans = 0;
    vector<string> every;
    for(iter = li.begin(); iter != li.end();iter++){
        if(iter->second == n){
            ans++;
            every.push_back(iter->first);
        }
    }
    sort(every.begin(),every.end());
    cout << ans << endl;
    for(int i = 0;i < every.size();i++){
        cout << every[i] << endl;
    }
    return 0;
}
