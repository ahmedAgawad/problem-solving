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

	int arr[100001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int l = 0, r = 0, ans = 0, sum = 0;
	while (l < n)
	{
		while (r < n && sum + arr[r] <= k)
		{
			sum += arr[r];
			r++;
		}

		ans = max(sum, ans);
		sum -= arr[l];
		l++;


	}

	cout << ans << endl;
	return 0;
}