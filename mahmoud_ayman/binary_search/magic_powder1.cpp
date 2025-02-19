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

	int n, k;
	cin >> n >> k;

	int a[1001];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int b[1001];
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}


	int l = 1, r = 2e5, ans = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;

		int diffSum = 0;

		for (int i = 0; i < n; i++)
		{
			if (b[i] / a[i] < mid)
			{
				diffSum += (a[i] * mid - b[i]);
			}
		}

		if (diffSum <= k)
		{
			ans = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}

	cout << ans << endl;

	return 0;
}