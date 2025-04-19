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

	int n;
	cin >> n;

	int mishka = 0, chris = 0;

	while (n--)
	{
		int m, c;
		cin >> m >> c;

		if (m > c)
			mishka++;
		else if (m < c)
			chris++;
		else
			mishka++, chris++;
	}

	
	if(mishka > chris)
		cout << "Mishka";
	else if (mishka < chris)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";

	return 0;
}