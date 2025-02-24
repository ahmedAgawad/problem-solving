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

	int arr[100];
	int max = 0, min = 101, minIndex = -1, maxIndex = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
		if(arr[i] <= min) {
			min = arr[i];
			minIndex = i;
		}
	}

	if(maxIndex > minIndex) {
		
		cout << maxIndex + ((n-1) - (minIndex + 1)) << endl;
	} else {
	
		cout << maxIndex + (n - 1 - minIndex) << endl;
	}

	return 0;
}