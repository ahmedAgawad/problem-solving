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

	int sum;
	cin >> sum;

	int l = 0, r = 100, ans = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		int result = (mid * (mid + 1) )/ 2;
		if (result == sum) {
			ans = mid;
			break;
		} else if (result < sum) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}

	cout << ans << endl;

	return 0;
}