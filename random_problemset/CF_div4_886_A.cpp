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

	int t;
	cin >> t;

	int arr[3];

	while (t--)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + 3);

		if (arr[2] + arr[1] >= 10)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}