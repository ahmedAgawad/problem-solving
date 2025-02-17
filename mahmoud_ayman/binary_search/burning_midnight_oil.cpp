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

	int k;
	cin >> k;

	int l = 1, r = 1000000001, ans = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		int v = mid;
		int tempN = n;

		while (v > 0)
		{
			tempN -= v;
			v /= k;
		}

		if (tempN <= 0)
		{
			ans = mid;
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}

	cout << ans << endl;
	return 0;
}