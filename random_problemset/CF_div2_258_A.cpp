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

	int n, m;
	cin >> n >> m;

	int min = n < m ? n : m;
	if (min % 2 == 0)
		cout << "Malvika" << endl;
	else
		cout << "Akshat" << endl;

	return 0;
}