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

	bool capsOn = true;

	for (int i = 1; i < s.size(); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			capsOn = false;
			break;
		}
	}
	
	if(capsOn)
	{
		if(s[0] >= 'a' && s[0] <= 'z')
		{
			transform(s.begin(), s.end(), s.begin(), ::tolower);
			s[0] = toupper(s[0]);
			cout << s << endl;
		} else if(s[0] >= 'A' && s[0] <= 'Z'){
			transform(s.begin(), s.end(), s.begin(), ::tolower);
			cout << s << endl;
		} else {
			cout << s << endl;
		}
	} else {
		cout << s << endl;
	}

	return 0;
}