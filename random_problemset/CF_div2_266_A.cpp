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

	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int ans = 0;

	if(((double) b/m) < a) {
		ans += (n/m) * b;
		n = n % m;

		if(n * a < b) {
			ans += n * a;
		}
		else {
			ans += b;
		}
	}
	else
	{
		ans += n * a;
	}

	cout << ans;
	return 0;
}