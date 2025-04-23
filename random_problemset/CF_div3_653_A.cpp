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
		long long x, y, n;
		cin >> x >> y >> n;

		if(n % x == y) {
			cout << n << "\n";
		} else if (n % x < y)  {
			cout << n - (x - (y - (n % x))) << "\n";
		} else {
			cout << n - (n % x - y) << "\n";
		}
	}

	return 0;
}