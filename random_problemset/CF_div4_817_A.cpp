#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		string name;
		cin >> name;

		int freq[5] = {0};

		bool valid = true;

		for (int i = 0; i < name.size(); i++)
		{
			if(name[i] == 'T') {
				freq[0]++;
			} else if(name[i] == 'i') {
				freq[1]++;
			} else if(name[i] == 'm') {
				freq[2]++;
			} else if(name[i] == 'u') {
				freq[3]++;
			} else if(name[i] == 'r') {
				freq[4]++;
			} else {
				valid = false;
				break;
			}
		}

		if(!valid) {
			cout << "NO" << endl;
			continue;
		}


		for (int i = 0; i < 5; i++)
		{
			if(freq[i] != 1) {
				valid = false;
				break;
			}
		}

		cout << (valid ? "YES" : "NO") << endl;
		
	}

	return 0;
}