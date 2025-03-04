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

	long long arr[100001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int current = 0;
	int maxSeg = -1;

	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			current++;
			if(n == 1) {
				maxSeg = current;
			}
		}
		else if (i > 0 && i < n - 1)
		{
			if(arr[i] >= arr[i-1]) {
				current++;
			} else {
				maxSeg = max(maxSeg, current);
				current = 1;
			}
		}
		else if (i == n - 1)
		{
			if(arr[i] >= arr[i-1]) {
				current++;
				maxSeg = max(maxSeg, current);
			}
			else
			{
				maxSeg = max(maxSeg, current);
				current = 1;
				maxSeg = max(maxSeg, current);
			}
		}
	}


	cout << maxSeg << endl;
	return 0;
}