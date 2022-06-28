#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> names;
    vector<string> sorted;
    vector<string> reversed;
    for(int i = 0;i < n;i++){
        string name;
        cin >> name;
        names.push_back(name);
//        cout << name << " ";
        sorted.push_back(name);
        reversed.push_back(name);
    }
//    cout << endl;
//    cout << endl;
    sort(sorted.begin(),sorted.end());
    sort(reversed.rbegin(),reversed.rend());
//    for(int i = 0;i < n;i++){
//        cout << reversed[i] << endl;
//    }
//    cout << endl;
    if(names == sorted){
        cout << "INCREASING" << endl;
    }
    else if(names == reversed){
        cout << "DECREASING" << endl;
    }
    else{
        cout << "NEITHER" << endl;
    }
    return 0;
}
