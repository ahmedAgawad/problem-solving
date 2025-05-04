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

		int maxSeq = 0;
		int currentSeq = 0;

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;

			if (x == 0)
			{
				currentSeq++;
			}
			else
			{
				maxSeq = max(maxSeq, currentSeq);
				currentSeq = 0;
			}
		}

		cout << max(maxSeq, currentSeq) << "\n";
	}

	return 0;
}