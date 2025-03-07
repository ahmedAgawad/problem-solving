#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		bool flag = false;
		int a, b, c;
		cin >> a >> b >> c;

		if (a + b == c)
		{
			flag = true;
		}

		if (a + c == b)
		{
			flag = true;
		}

		if (b + c == a)
		{
			flag = true;
		}

		if (flag)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}

		 cout << endl;
	}

	return 0;
}