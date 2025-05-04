#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int max = 0, min = 0;

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;

			if (i == 0)
			{
				max = x;
				min = x;
			}
			else
			{
				if (x > max)
					max = x;
				if (x < min)
					min = x;
			}
		}

		cout << max - min << "\n";
	}

	return 0;
}