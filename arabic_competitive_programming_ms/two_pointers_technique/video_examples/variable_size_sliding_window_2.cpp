#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int arr[1000001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int k;
	cin >> k;

	int l = 0, r = 0, ans = __INT_MAX__;
	map<int, int> cnt;
	set<int> uniq;

	while (l < n)
	{
		while (r < n && uniq.size() < k)
		{
			uniq.insert(arr[r]);
			cnt[arr[r]]++;
			r++;
		}
		if (uniq.size() >= k)
		{
			ans = min(ans, r - l);
		}

		if (cnt[arr[l]] == 1)
		{
			uniq.erase(arr[l]);
		}

		cnt[arr[l]]--;
		l++;
	}

	cout << ans << endl;
	return 0;
}