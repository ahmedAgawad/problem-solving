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
		long long l, r;
		cin >> l >> r;

		long long diff = r - l;
		long long left = 0, right = 1e6, ans = 0;

		while (left <= right)
		{
			long long mid = (left + right) / 2;
			long long val = mid * (mid + 1) / 2;
			if (val > diff)
			{
				ans = mid;
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}