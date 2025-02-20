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

	int arr[1000001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int k;
	cin >> k;

	int sum = 0;


	int l = 0, r = l + k - 1;
	bool firstIteration = true;
	while (l < n)
	{
		if(firstIteration) {
			for (int i = 0; i <= r; i++)
			{
				sum += arr[i];
			}

			
			cout << sum << " ";
			firstIteration = false;
		} 

		sum -= arr[l];
		l++;
		r = l + k - 1;
		if(r < n) {
			sum += arr[r];
		} else {
			break;
		}

		cout << sum << " ";
	}

	return 0;
}