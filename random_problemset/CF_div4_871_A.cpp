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

	string org = "codeforces";

	while (t--)
	{
		string s;
		cin >> s;

		int diff = 0;

		for (int i = 0; i < 10; i++)
		{
			if (s[i] != org[i])
			{
				diff++;
			}
		}

		cout << diff << endl;
	}

	return 0;
}