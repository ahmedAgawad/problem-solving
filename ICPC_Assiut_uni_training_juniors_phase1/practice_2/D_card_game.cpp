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

	string sm, sa, sr;
	cin >> sm >> sa >> sr;

	queue<char> muh, ali, rad;

	for (char ch : sm) 
	{
		muh.push(ch);
	}
	for (char ch : sa)
	{
		ali.push(ch);
	}

	for (char ch : sr)
	{
		rad.push(ch);
	}

	char currentTurn = 'm';

	while (true)
	{

		if(currentTurn == 'm') {
			if(muh.empty()) {
				cout << "M";
				break;
			}
			currentTurn = muh.front();
			muh.pop();
		}
		else if (currentTurn == 'a')
		{
			if(ali.empty()) {
				cout << "A";
				break;
			}
			currentTurn = ali.front();
			ali.pop();
		}
		else if (currentTurn == 'r')
		{
			if(rad.empty()) {
				cout << "R";
				break;
			}
			currentTurn = rad.front();
			rad.pop();
		}
	}


	

	

	return 0;
}