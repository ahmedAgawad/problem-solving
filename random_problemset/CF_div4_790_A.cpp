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
		string n;
		cin >> n;

		int len = n.length();	

		int first3Sum = (n[0] - '0') + (n[1] - '0') + (n[2] - '0');
		int last3Sum = (n[len - 1] - '0') + (n[len - 2] - '0') + (n[len - 3] - '0');

		if(first3Sum == last3Sum) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}