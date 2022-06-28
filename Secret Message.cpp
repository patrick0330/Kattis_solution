#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        string msg;
        cin >> msg;
        int k = ceil(sqrt(msg.length()));
        char plain[k][k];

        int counter = 0;
        for(int j = 0;j < k;j++){
            for(int l = 0;l < k;l++){
                if(counter <= msg.length() - 1){
                    plain[j][l] = msg[counter];
                    counter ++;
                }
                else{
                    plain[j][l] = '*';
                }
//                cout << plain[j][l] << " ";
            }
//            cout << endl;
        }
//        cout << endl;
        char enc[k][k];
        for(int j = 0;j < k;j++){
            for(int l = 0;l < k;l++){
                enc[j][l] = plain[k - l - 1][j];
//                cout << enc[j][l] << " ";
            }
//            cout << endl;
        }
//        cout << endl;
        for(int j = 0;j < k;j++){
            for(int l = 0;l < k;l++){
                if(enc[j][l] != '*'){
                    cout << enc[j][l];
                }
            }

        }
        cout << endl;

    }
    return 0;
}
