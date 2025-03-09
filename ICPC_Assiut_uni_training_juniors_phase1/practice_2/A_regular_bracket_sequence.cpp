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

	string s;
	cin >> s;

	stack<char> st;
	int count = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] == '(')
		{
			st.push(s[i]);
		} else if (s[i] == ')' && !st.empty())
		{
			st.pop();
			count += 2;
		}
	}
	
	cout << count << endl;

	return 0;
}