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

	int q;
	cin >> q;

	while (q--)
	{
		string s, t;
		cin >> s;
		cin >> t;


		string common = "";
		for (int i = 0; i < min(s.length(), t.length()); i++)
		{
			if (s[i] == t[i])
			{
				common += s[i];
			}
			else
			{
				break;
			}
		}

		if(common.length() != 0) { 
			cout << common.length() + 1 + (s.length() - common.length()) + (t.length() - common.length()) << endl;
		} else {
			cout << s.length() + t.length() << endl;
		}
	}

	return 0;
}