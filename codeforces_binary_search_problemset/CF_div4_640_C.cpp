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
		long long n, k;
		cin >> n >> k;

		long long l = 0, r = 1e10, ans = 0, diff = 0;
		while (l <= r)
		{
			long long mid = (l + r) / 2;
			long long result = mid * (n - 1);

			if (result < k)
			{
				ans = mid;
				diff = k - (mid * (n - 1));
				l = mid + 1;
			}
			else
			{
				r = mid - 1;
			}
		}

		cout << n * ans + diff << endl;
	}

	return 0;
}