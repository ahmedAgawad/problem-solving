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

	int n, l;
	cin >> n >> l;

	int arr[1001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	double max = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			if (arr[0] != 0)
			{
				max = arr[0];
			}

			if(n == 1) {
				if(arr[0] > l - arr[0]) {
					max = arr[0];
				}
				else {
					max = l - arr[0];
				}
			}
		}
		else if (i == n - 1)
		{
			if (((double)arr[i] - (double)arr[i - 1]) / 2 > max)
			{
				max = ((double)arr[i] - (double)arr[i - 1]) / 2;
			}
			if (arr[n - 1] != l)
			{
				if (l - arr[n - 1] > max)
				{
					max = l - arr[n - 1];
				}
			}
		}

		else
		{
			if (((double)arr[i] - (double)arr[i - 1]) / 2 > max)
			{
				max = ((double)arr[i] - (double)arr[i - 1]) / 2;
			}
		}
	}

	cout << fixed << setprecision(10) << max << endl;

	return 0;
}