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

	int current = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'h' && current == 0) { 
			current++;
		} else if(s[i] == 'e' && current == 1) {
			current++;
		} else if(s[i] == 'l' && current == 2) {
			current++;
		} else if(s[i] == 'l' && current == 3) {
			current++;
		} else if(s[i] == 'o' && current == 4) {
			current++;
		}
	}


	if(current == 5) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	

	return 0;
}