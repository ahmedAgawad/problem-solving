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
		string s;
		cin >> s;

		if(s.size() % 2 != 0) {
			cout << "NO" << endl;
		} else {
			string firstPart = s.substr(0, s.size() / 2);
			string secondPart = s.substr(s.size() / 2);

			cout << (firstPart == secondPart ? "YES" : "NO") << endl;
		}
	}

	return 0;
}