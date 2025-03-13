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
	bool proper = true;
	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
			st.push(s[i]);
		} else {
			if(st.empty()) {
				proper = false;
				break;
			} else if(s[i] == ')' && st.top() == '(') {
				st.pop();
			} else if(s[i] == ']' && st.top() == '[') {
				st.pop();
			} else if(s[i] == '}' && st.top() == '{') {
				st.pop();
			} else {
				proper = false;
				break;
			}
		}
	}

	if(proper && st.empty()) {
		cout << "yes\n";
	} else {
		cout << "no\n";
	}
	

	return 0;
}