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

	for (int i = 0; i < s.size(); i++)
	{
		if(st.empty()) {
			st.push(s[i]);
		} else {
			if(st.top() == s[i]) {
				st.pop();
			} else {
				st.push(s[i]);
			}
		}
	}

	string ans = "";
	while(!st.empty()) {
		ans += st.top();
		st.pop();
	}

	reverse(ans.begin(), ans.end());

	cout << ans << endl;
	

	return 0;
}