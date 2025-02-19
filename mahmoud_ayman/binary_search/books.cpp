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

	int n, t;
	cin >> n >> t;

	int arr[100001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int l = 1, r = n, ans = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;

		long long sum = 0;

		for (int i = 0; i < mid; i++)
		{
			sum += arr[i];
		}

		long long minSum = sum;

		for (long long i = mid; i < n; i++)
		{
			sum -= arr[i - mid];
			sum += arr[i];
			if (sum < minSum)
			{
				minSum = sum;
			}
		}


		if(minSum <= t) {
			ans = mid;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}

	cout << ans << endl;

	return 0;
}