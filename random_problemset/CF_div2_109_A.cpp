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

	int max = -1;
	int min = 100000;
	int count = 0;

	int score;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cin >> score;
			max = score;
			min = score;
		} else {
			cin >> score;
			if(score > max) {
				max = score;
				count++;
			} else if(score < min) {
				min = score;
				count++;
			}
		}
	
	}

	cout << count << endl;
	
	

	return 0;
}