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

	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;

	int min = 101;
	if(abs(x1 - x2) + abs(x1-x3) < min) {
		min = abs(x1 - x2) + abs(x1-x3);
	} 

	if(abs(x2 - x1) + abs(x2-x3) < min) {
		min = abs(x2 - x1) + abs(x2-x3);
	}

	if(abs(x3 - x1) + abs(x3-x2) < min) {
		min = abs(x3 - x1) + abs(x3-x2);
	}
	cout << min << endl;


	return 0;
}