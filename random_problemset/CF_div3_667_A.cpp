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
		int a, b;
		cin >> a >> b;

		int diff = abs(a - b);
		int ans = ceil(diff / 10.0);
		cout << ans << endl;
	}

	return 0;
}