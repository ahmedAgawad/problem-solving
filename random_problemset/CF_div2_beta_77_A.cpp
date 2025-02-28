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

	string s;
	cin >> s;

	int maxConsecutive = 0;
	int currentConsecutive = 1;

	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == s[i - 1]) {
			currentConsecutive++;
		} else {
			currentConsecutive = 1;
		}

		maxConsecutive = max(maxConsecutive, currentConsecutive);
	}

	if(maxConsecutive >= 7) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}