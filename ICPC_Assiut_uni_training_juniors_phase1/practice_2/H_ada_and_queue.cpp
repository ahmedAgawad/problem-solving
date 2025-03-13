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

	deque<int> q;

	int Q;
	cin >> Q;

	while (Q--)
	{
		string s;
		cin >> s;

		if (s == "back")
		{
			if (q.empty())
			{
				cout << "No job for Ada?";
			}
			else
			{
				cout << q.back();
				q.pop_back();
			}
			cout << endl;
		}
		else if (s == "front")
		{
			if (q.empty())
			{
				cout << "No job for Ada?";
			}
			else
			{
				cout << q.front();
				q.pop_front();
			}
			cout << endl;
		}
		else if (s == "reverse")
		{
			reverse(q.begin(), q.end());
		}
		else if (s == "push_back")
		{
			int x;
			cin >> x;
			q.push_back(x);
		}
		else if (s == "toFront")
		{
			int x;
			cin >> x;
			q.push_front(x);
		}
	}

	return 0;
}