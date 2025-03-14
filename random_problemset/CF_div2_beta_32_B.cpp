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

	string ans = "";

	for (int i = 0; i < s.size();)
	{
		if(s[i] == '.') {
			ans += '0';
			i++;
		} else if(s[i] == '-' && s[i+1] == '.') {
			ans += '1';
			i+=2;
		} else if(s[i] == '-' && s[i+1] == '-') {
			ans += '2';
			i+=2;
		}
	}

	cout << ans;

	return 0;
}