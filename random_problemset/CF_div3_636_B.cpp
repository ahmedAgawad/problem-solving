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
		int n;
		cin >> n;

		vector<int> nums;
		int even = 2;
		int sumEven = 0;
		for (int i = 0; i < n / 2; i++)
		{
			nums.push_back(even);
			sumEven += even;
			even += 2;
		}

		bool canForm = false;

		int odd = 1;
		for (int i = n / 2; i < n; i++)
		{
			if (i == n - 1)
			{
				if(sumEven % 2  == 1) {
					canForm = true;
					nums.push_back(sumEven);
				} else {
					nums.push_back(odd);
				} 
			}
			else
			{
				nums.push_back(odd);
				sumEven -= odd;
				odd += 2;
			}
		}

		if (canForm)
		{
			cout << "YES" << endl;
			for (int i = 0; i < n; i++)
			{
				cout << nums[i] << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		nums.clear();
	}

	return 0;
}