#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int n;
        cin >> n;
        priority_queue<long long,vector<long long>,greater<long long> > canvas;
        for(int j = 0;j < n;j++){
            //cout << "Input a number: " << endl;
            long long c;
            cin >> c;
            canvas.push(c);
        }
        long long ans = 0;
        while(canvas.size() > 1){
            long long cost = 0;
            cost += canvas.top();
            canvas.pop();
            cost += canvas.top();
            canvas.pop();
            ans += cost;
            //cout << "Ans is " << ans << endl;
            canvas.push(cost);
        }
        cout << ans << endl;
    }
    return 0;
}
