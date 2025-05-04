#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int even_wrong = 0; 
		int odd_wrong = 0; 

		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;


			if (i % 2 == 0 && x % 2 != 0)
			{
				even_wrong++;
			}
		
			else if (i % 2 == 1 && x % 2 != 1)
			{
				odd_wrong++;
			}
		}

		
		if (even_wrong != odd_wrong)
		{
			cout << -1 << '\n';
		}
		else
		{
			cout << even_wrong << '\n'; 
		}
	}

	return 0;
}