#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> houses(n);
    int connected[n] = {0};
    connected[0] = 1;
    queue<int> cable;
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        houses[a - 1].push_back(b - 1);
        houses[b - 1].push_back(a - 1);
    }
    cable.push(0);
    while(!cable.empty()){
        int u = cable.front();
        cable.pop();
        for(int i = 0;i < houses[u].size();i++){
            int cur = houses[u][i];
            if(connected[cur] == 0){
                cable.push(cur);
                connected[cur] = 1;
            }
        }
    }
    int ok = 1;
    for(int i = 0;i < n;i++){
        if(connected[i] == 0){
            cout << i + 1 << endl;
            ok = 0;
        }
    }
    if(ok){
        cout << "Connected" << endl;
    }
    return 0;
}
