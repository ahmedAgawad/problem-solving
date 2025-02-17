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

	long long dorms[200001];
	long long dormsPrefix[200001] = {0};

	for (int i = 0; i < n; i++)
	{
		cin >> dorms[i];
		if (i == 0)
		{
			dormsPrefix[0] = dorms[0];
		}
		else
		{
			dormsPrefix[i] = dormsPrefix[i - 1] + dorms[i];
		}
	}

	while (m--)
	{
		long long letter;
		cin >> letter;

		int l = 0, r = n - 1, ans = -1;
		while (l <= r)
		{
			int mid = (l + r) / 2;

			if (dormsPrefix[mid] < letter)
			{
				l = mid + 1;
			}
			else
			{
				ans = mid;
				r = mid - 1;
			}
		}

		if (ans != 0)
		{
			cout << ans + 1 << " " << letter - dormsPrefix[ans - 1] << endl;
		}
		else
		{
			cout << ans + 1 << " " << letter << endl;
		}
	}
	return 0;
}