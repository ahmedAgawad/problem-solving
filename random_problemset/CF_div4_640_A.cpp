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

	int arr[4];

	while (t--)
	{
		int n;
		cin >> n;

		int currentMultipler = 1;
		int counter = 0;
		while (n > 0)
		{
			if (n % 10 != 0)
			{
				arr[counter] = (n % 10) * currentMultipler;
				counter++;
			}
			n /= 10;
			currentMultipler *= 10;
		}

		cout << counter << endl;

		for (int i = 0; i < counter; i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
	}

	return 0;
}