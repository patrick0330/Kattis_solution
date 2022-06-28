#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w,p;
    cin >> w >> p;
    vector<int> part;

    part.push_back(0);
    for(int i = 0;i < p;i++){
        int num;
        cin >> num;
        part.push_back(num);
    }
    part.push_back(w);

    vector<int> permu;
    for(int i = 1; i < p + 2;i++){
        for(int j = 0; j < p + 2 -i;j++){
            permu.push_back(part[j + i] - part[j]);
        }
    }
    //cout << "Hello!!" << endl;
    sort(permu.begin(), permu.end());
    permu.erase( unique( permu.begin(), permu.end() ), permu.end() );

    for(int i = 0;i < permu.size();i++){
        cout << permu[i] << " ";
    }
    cout << endl;
    return 0;
}
