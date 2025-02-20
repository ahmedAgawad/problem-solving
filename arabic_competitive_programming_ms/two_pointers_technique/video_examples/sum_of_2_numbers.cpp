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

	int x;
	cin >> x;

	int arr[1000001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int l = 0, r = n - 1;
	bool found = false;

	while(l < r) {
		if(arr[l] + arr[r] < x) {
			l++;
		} else if(arr[l] + arr[r] > x) {
			r--;
		} else if(arr[l] + arr[r] == x) {
			found = true;
			break;
		}
	}

	if (found)
	{
		cout << l + 1 << " " << r + 1 << endl;
	} else {
		cout << "No Sum found";
	}

	return 0;
}