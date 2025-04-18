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
		if(a > b && a < c) {
			cout << a << endl;
		} else if(a > c && a < b) {
			cout << a << endl;
		} else if(b > a && b < c) {
			cout << b << endl;
		} else if(b > c && b < a) {
			cout << b << endl;
		} else if(c > a && c < b) {
			cout << c << endl;
		} else if(c > b && c < a) {
			cout << c << endl;
		} 
	}

	return 0;
}