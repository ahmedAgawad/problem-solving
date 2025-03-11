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

	stack<string> st;

	bool is_valid = true;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (i == 0)
		{
			if(s != "Header") {
				is_valid = false;
			} else {
				st.push(s);
			}
		}
		else if (i == n - 1)
		{
			if (s != "EndHeader")
			{
				is_valid = false;
			} else {
				st.pop();
			}
		}
		else
		{
			if (s == "Row" || s == "Table" || s == "Cell")
			{
				st.push(s);
			}
			else
			{
				if (st.empty())
				{
					is_valid = false;
				}
				else
				{
					if (s == "EndRow" && st.top() == "Row")
					{
						st.pop();
					}
					else if (s == "EndTable" && st.top() == "Table")
					{
						st.pop();
					}
					else if (s == "EndCell" && st.top() == "Cell")
					{
						st.pop();
					}
					else
					{
						is_valid = false;
					}
				}
			}
		}
	}

	if (st.empty() && is_valid == true)
	{
		cout << "ACC" << endl;
	}
	else
	{
		cout << "WA" << endl;
	}

	return 0;
}