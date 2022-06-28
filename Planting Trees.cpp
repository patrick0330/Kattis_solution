#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> tree;
    for(int i = 0;i < t;i++){
        int num;
        cin >> num;
        tree.push_back(num);
    }
    sort(tree.rbegin(),tree.rend());

    int time;
    for(int i = 0;i < t;i++){
        if(tree[i] + i > time){
            time = tree[i] + i;
        }
    }
    cout << time + 2 << endl;
    return 0;
}
