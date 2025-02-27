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

	int n, m;
	cin >> n >> m;

	int arrN[200001];
	int arrM[200001];

	for (int i = 0; i < n; i++)
	{
		cin >> arrN[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> arrM[i];
	}

	sort(arrN, arrN + n);

	for (int i = 0; i < m; i++)
	{
		int l = 0, r = n - 1, ansIndex = -1;

		while (l <= r)
		{
			int mid = (l + r) / 2;

			if (arrN[mid] <= arrM[i])
			{
				ansIndex = mid;
				l = mid + 1;
			}
			else
			{
				r = mid - 1;
			}
		}

		cout << ansIndex + 1 << endl;
	}

	return 0;
}
