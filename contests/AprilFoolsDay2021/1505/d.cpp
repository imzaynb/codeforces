#include <bits\stdc++.h>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if ((x % 10) < (y % 10))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}