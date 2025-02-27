#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int arr[200001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n); 

	int maxTeam = 0, left = 0;

	for (int right = 0; right < n; right++)
	{
		while (arr[right] - arr[left] > 5)
		{
			left++; 
		}
		maxTeam = max(maxTeam, right - left + 1);
	}

	cout << maxTeam << endl;

	return 0;
}
