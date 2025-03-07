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

	int s, n;
	cin >> s >> n;

	bool flag = true;

	vector<pair<int, int>> dragons;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		dragons.push_back(make_pair(x, y));
	}

	sort(dragons.begin(), dragons.end());
	
	for (int i = 0; i < n; i++)
	{
		if (s > dragons[i].first)
		{
			s += dragons[i].second;
		}
		else
		{
			flag = false;
			break;
		}
	}

	if (flag) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}