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

	queue<int> q;

	while (n--)
	{
		int a, b;
		cin >> a >> b;

		if(a == 1) {
			q.push(b);
		}
		else
		{
			if(q.empty())
			{
				cout << "No" << endl;
			}
			else
			{
				if(q.front() == b) {
					cout << "Yes" << endl;
				} else {
					cout << "No" << endl;
				}

				q.pop();	
			}
		}
	}

	return 0;
}