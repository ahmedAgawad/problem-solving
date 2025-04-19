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
		int a, b;
		cin >> a >> b;

		int min = __INT_MAX__;

		for (int i = a; i <= b; i++)
		{
			int result = (i - a) + (b - i);
			if (result < min)
			{
				min = result;
			}
		}
		

		cout << min << "\n";
	}

	return 0;
}