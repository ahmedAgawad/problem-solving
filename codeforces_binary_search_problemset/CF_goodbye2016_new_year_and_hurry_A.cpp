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

	int t = 4 * 60 - k;

	int l = 1, r = n, ans = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		int totalTime = 0;

		for (int i = 1; i <= mid; i++)
		{
			totalTime += (i * 5);
		}


		if (totalTime <= t)
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