#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int arr[9];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int prod = 1;
		arr[0]++;

		for (int i = 0; i < n; i++)
		{
			prod *= arr[i];
		}

		cout << prod << endl;
	}

	return 0;
}