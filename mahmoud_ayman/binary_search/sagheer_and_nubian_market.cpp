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

	long long n, s;
	cin >> n >> s;

	long long arr[100001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	long long l = 0, r = n, ans = 0, cost = 0;

	while (l <= r)
	{
		long long mid = (l + r) / 2;
		long long spent = 0;
		vector<long long> v;

		for (int i = 0; i < n; i++)
		{
			v.push_back(arr[i] + (long long)(i + 1) * mid);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < mid; i++)
		{
			spent += v[i];
		}

		if(spent <= s) {
			ans = mid;
			cost = spent;
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}

	cout << ans << " " << cost << endl;

	return 0;
}