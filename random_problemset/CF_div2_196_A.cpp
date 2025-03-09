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

	int arr[51];
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + m);

	int min = __INT_MAX__;

	for (int i = 0; i < m; i++)
	{
		if(i + n - 1 < m) {
			if (arr[i + n - 1] - arr[i] < min)
			{
				min = arr[i + n - 1] - arr[i];
			}
		}
	}
	
	cout << min << endl;

	return 0;
}
