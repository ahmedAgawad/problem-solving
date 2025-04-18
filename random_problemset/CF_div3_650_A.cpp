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
		string b;
		cin >> b;

		string a = "";
		a += b[0];


		for (int i = 1; i < b.size() - 1; i += 2)
		{
			a += b[i];
		}

		a += b[b.size() - 1];
		cout << a << "\n";
	}

	return 0;
}