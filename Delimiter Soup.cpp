#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> d;
    string input;
    int ok = 1;
    int n;
    cin >> n;
    cin.get();
    getline(cin,input);
    for(int i = 0;i < n;i++){
        if(input[i] == ' '){
            continue;
        }
        else if(input[i] == '(' || input[i] == '[' || input[i] == '{'){
            d.push(input[i]);
        }
        else if(input[i] == ')'){
            if(d.empty()){
                cout << input[i] << " " << i << endl;
                ok = 0;
                break;
            }
            if(d.top() == '('){
                d.pop();
            }
            else{
                cout << input[i] << " " << i << endl;
                ok = 0;
                break;
            }
        }
        else if(input[i] == ']'){
            if(d.empty()){
                cout << input[i] << " " << i << endl;
                ok = 0;
                break;
            }
            if(d.top() == '['){
                d.pop();
            }
            else{
                cout << input[i] << " " << i << endl;
                ok = 0;
                break;
            }
        }
        else if(input[i] == '}'){
            if(d.empty()){
                cout << input[i] << " " << i << endl;
                ok = 0;
                break;
            }
            if(d.top() == '{'){
                d.pop();
            }
            else{
                cout << input[i] << " " << i << endl;
                ok = 0;
                break;
            }
        }
    }
    if(ok){
        cout << "ok so far" << endl;
    }
    return 0;
}
