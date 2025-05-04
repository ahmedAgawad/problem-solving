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
		int n;
		cin >> n;

		string s;
		cin >> s;

		s.erase(unique(s.begin(), s.end()), s.end());

		unordered_map<char, int> mp;
		for (char ch : s)
		{
			mp[ch]++;
		}

		bool sus = false;

		for (auto it : mp)
		{
			if (it.second > 1)
			{
				sus = true;
				break;
			}
		}

		if(!sus) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}