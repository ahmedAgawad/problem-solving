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

	while (t--)
	{
		int arr[51];
		int n;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		

		sort(arr, arr + n);

		bool flag = true;

		for (int i = 1; i < n; i++)
		{
			if(arr[i] - arr[i-1] > 1) {
				flag = false;
				break;
			}
		}
		
		if(flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}