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

	int n, k;
	cin >> n >> k;

	int arr[2001];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr, arr + n);

	int ans = 0;

	for (int i = 2; i < n; i += 3)
	{
		if (5 - arr[i] >= k)
		{
			ans++;
		}
	}

	cout << ans << endl;
	

	return 0;
}