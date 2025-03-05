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

	int n;
	cin >> n;

	int lastOdd;
	int lastEven;

	int countOdd = 0, countEven = 0;

	int num;
	for (int i = 1; i <= n; i++)
	{
		cin >> num;
		if(num % 2 == 0)  {
			lastEven = i;
			countEven++;
		}
		else
		{
			lastOdd = i;
			countOdd++;
		}
	}

	if (countOdd == 1) 
	{
		cout << lastOdd << endl;
	} else {
		cout << lastEven << endl;
	}

	return 0;
}