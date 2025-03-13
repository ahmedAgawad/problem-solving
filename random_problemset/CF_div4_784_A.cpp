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
		int rating;
		cin >> rating;

		if(rating <= 1399) {
			cout << "Division 4" << endl;
		} else if(rating >= 1400 && rating <= 1599) {
			cout << "Division 3" << endl;
		} else if(rating >= 1600 && rating <= 1899) {
			cout << "Division 2" << endl;
		} else {
			cout << "Division 1" << endl;
		}
	}

	return 0;
}