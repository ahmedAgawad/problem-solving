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

	int arr[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + 4);

	int a, b, c;
	a = arr[3] - arr[0];
	b = arr[2] - a;
	c = arr[1] - a;

	cout << a << " " << b << " " << c << endl;

	return 0;
}