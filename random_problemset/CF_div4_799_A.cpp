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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int count = 0;
		if(b > a) {
			count++;
		}

		if(c > a) {
			count++;
		}

		if(d > a) {
			count++;
		}

		cout << count << endl;
	}

	return 0;
}