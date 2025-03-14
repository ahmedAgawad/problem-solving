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
		int a, b, c;
		cin >> a >> b >> c;

		if (a + b == c)
		{
			cout << "+" << endl;
		}
		else if (a - b == c)
		{
			cout << "-" << endl;
		}

		
	}

	return 0;
}