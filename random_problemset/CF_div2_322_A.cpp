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

	int a, b;
	cin >> a >> b;

	int ans1 = 0, ans2 = 0;

	ans1 = min(a, b);
	a -= ans1;
	b -= ans1;

	ans2 = max(a / 2, b / 2);

	cout << ans1 << " " << ans2 << endl;

	return 0;
}