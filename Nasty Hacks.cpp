#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i = 0;i < n;i++){
        int noad,ad,cost;
        cin >> noad >> ad >> cost;
        if(ad - cost > noad){
            cout << "advertise" << endl;
        }
        else if(ad - cost == noad){
            cout << "does not matter" << endl;
        }
        else{
            cout << "do not advertise" << endl;
        }
    }

    return 0;
}