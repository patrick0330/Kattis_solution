#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        double b;
        double p;
        cin >> b >> p;
        double measure = 60.0 * b / p;
        double error = 60.0 / p;
        cout << setprecision(4) << fixed << measure - error << " ";
        cout << setprecision(4) << fixed << measure << " ";
        cout << setprecision(4) << fixed << measure + error << endl;

    }
    return 0;
}