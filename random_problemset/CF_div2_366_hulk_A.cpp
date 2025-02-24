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

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i != n)
		{
			if (i % 2 == 0)
			{
				cout << "I love that ";
			}
			else
			{
				cout << "I hate that ";
			}
		} else {
			if (i % 2 == 0)
			{
				cout << "I love it";
			} else {
				cout << "I hate it";
			}
			
		}
	}

	return 0;
}