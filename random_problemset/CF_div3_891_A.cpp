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

		int oddFreq = 0;

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;

			if (x % 2 == 1)
				oddFreq++;
		}

		if(oddFreq % 2 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}