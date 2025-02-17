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
	long long k;
	cin >> k;

	long long arr[200001];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	long long l = 1, r = arr[n-1] + k, ans = 0;
	while (l <= r)
	{
		long long mid = (l + r) / 2;
		unsigned long long operations = 0;
		for (int i = n / 2; i < n; i++)
		{
			if(mid > arr[i]) {
				operations += (mid - arr[i]);
			}
		}

		if (operations <= k) {
			ans = mid;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}

	cout << ans << endl;
	

	return 0;
}