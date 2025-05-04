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

	// 0 to 23
	// 0 to 59

	int t;
	cin >> t;
	while (t--)
	{
		int h, m;
		cin >> h >> m;

		cout << (23 - h) * 60 + (60 - m) << endl;
	}

	return 0;
}