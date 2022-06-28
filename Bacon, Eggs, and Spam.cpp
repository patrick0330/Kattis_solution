#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        map<string,vector<string>> menu;
        map<string, vector<string>>::iterator iter;
        getchar();
        for(int i = 0;i < n;i++){
            string str;
            str = "\n";
            getline(cin,str);
            //cout << str << endl;
            vector<string> order;
            int pos = 0;
            while ((pos = str.find(" ")) != string::npos) {
                order.push_back(str.substr(0, pos));
                str.erase(0, pos + 1);
                //cout << str << endl;
            }
            order.push_back(str);
            //cout << "HI" << endl;
            for(int j = 1;j < order.size();j++){
                iter = menu.find(order[j]);
                if(iter != menu.end()){
                    menu[order[j]].push_back(order.front());
                }
                else{
                    menu[order[j]].push_back(order.front());
                }
            }
        }
        for(iter = menu.begin(); iter != menu.end(); iter++){
            sort(iter->second.begin(),iter->second.end());
        }
        for(iter = menu.begin(); iter != menu.end(); iter++){
            cout << iter->first << " ";
            for(int j = 0;j < iter->second.size();j++){
                cout << iter->second[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
