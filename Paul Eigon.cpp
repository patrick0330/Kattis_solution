#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q,num;
    cin >> n >> p >> q;

	num = (p + q) % (2 * n);
	if (num >= n)
	{
		cout << "opponent" << endl;
	}
	else
	{
		cout << "paul" << endl;
	}
	return 0;
}
