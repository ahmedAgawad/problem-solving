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

	int a, b, c;
	cin >> a >> b >> c;

	int max = -1;

	if(a + b + c > max) {
		max = a + b + c;
	}

	if(a * b * c > max) {
		max = a * b * c;
	}

	if(a * b + c > max) {
		max = a * b + c;
	}

	if(a + b * c > max) {
		max = a + b * c;
	}

	if((a + b) * c > max) {	
		max = (a + b) * c;
	}

	if(a * (b + c) > max) {
		max = a * (b + c);
	}

	cout << max << endl;

	return 0;
}