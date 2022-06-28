#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c;
    int l;
    cin >> c >> l;
    double total_area = 0.0;
    for(int i  = 0;i < l;i++){
        double width,leng;
        cin >> width >> leng; 
        total_area += width * leng;
    }
    double cost = total_area * c;
    cout << setprecision(8) << fixed << cost << endl;
    return 0;
}