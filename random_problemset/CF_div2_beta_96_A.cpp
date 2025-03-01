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

	bool output = false;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
		{
			cout << "YES";
			output = true;
			break;
		}
	}

	if(output == false) {
		cout << "NO";
	}

	return 0;
}