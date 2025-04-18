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

	while (t--)
	{
		char a, b, c;
		cin >> a >> b >> c;

		if ((a == 'a' && b == 'b' && c == 'c') || (a == 'a' && b == 'c' && c == 'b') || (a == 'b' && b == 'a' && c == 'c') || (a == 'c' && b == 'b' && c == 'a'))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}