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

	int blocksToAdd = 0;
	int addedBlocks = 0;
	int addition = 1;
	int counter = 0;

	while (true)
	{
		blocksToAdd += addition;
		if (addedBlocks + blocksToAdd > n)
		{
			break;
		}
		else
		{
			addedBlocks += blocksToAdd;
			counter++;
		}

		addition++;
	}

	cout << counter << endl;

	return 0;
}