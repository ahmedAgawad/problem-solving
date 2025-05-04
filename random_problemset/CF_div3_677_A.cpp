#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int x;
		cin >> x;

		int currDigit = 1;
		int keysPressed = 0;
		int currApartment = 1;
		int noOfDigits = 1;
		while (true)
		{
			if (currApartment == x)
			{
				keysPressed += noOfDigits;
				break;
			}
			else
			{
				if (currApartment > 1000)
				{
					keysPressed += 4;
					currDigit++;
					currApartment = currDigit;
					noOfDigits = 1;
				}
				else
				{
					keysPressed += noOfDigits;
					currApartment = currApartment * 10 + currDigit;
					noOfDigits++;
				}
			}
		}

		cout << keysPressed << "\n";
	}

	return 0;
}