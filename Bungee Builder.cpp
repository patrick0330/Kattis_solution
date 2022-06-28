#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin >> n;
    int h[n];
    for(int i = 0;i < n;i++){
        cin >> h[i];
    }
    stack<pair<int,int>> s;
    for(int i = 0;i < n;i++){
        int bottom = h[i];
        while(s.size() > 0){
            pair<int,int> last = s.top();
            s.pop();
            bottom = min(last.second, bottom);
            if(last.first > h[i]){
                s.push(make_pair(last.first,bottom));
                ans = max(ans,h[i] - bottom);
                break;
            }
            ans = max(ans,last.first - bottom);
        }
        s.push(make_pair(h[i],h[i]));
    }
    cout << ans << endl;
    return 0;
}
