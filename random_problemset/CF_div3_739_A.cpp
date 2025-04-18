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

	int arr[1001] = {0};

	int arrIndex = 0;
	int num = 1;

	while (arrIndex < 1001)
	{
		if(num % 3 != 0 && num % 10 != 3)
		{
			arr[arrIndex] = num;
			arrIndex++;
		}
		num++;
	}

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		cout << arr[n - 1] << "\n";
	}
	

	return 0;
}