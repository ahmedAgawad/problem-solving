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

	int arr[100001];

	int counts[5] = {0, 0, 0, 0, 0};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		counts[arr[i]]++;
	}

	int teams = 0;

	// 3s and 1s
	int tAndo = min(counts[1], counts[3]);
	teams += tAndo;

	counts[1] -= tAndo;
	counts[3] -= tAndo;


	// 2s and 2s
	int tAndt = counts[2] / 2;
	teams += tAndt;

	counts[2] -= tAndt * 2;


	// 1s and 2s
	int oAndt = min(counts[1] / 2, counts[2] );
	teams += oAndt;
	counts[1] -= oAndt * 2;
	counts[2] -= oAndt;

	// 1s
	int ones = counts[1] / 4;
	teams += ones;

	counts[1] -= ones * 4;

	// 1s and 2s
	int oAndt2 = min(counts[1], counts[2]);
	teams += oAndt2;



	counts[1] -= oAndt2;
	counts[2] -= oAndt2;

	teams += counts[4];
	teams += counts[3];
	teams += counts[2];
	if(counts[1] == 2 || counts[1] == 3 || counts[1] == 1) {
		teams += 1;
	} 



	cout << teams << endl;

	return 0;
}