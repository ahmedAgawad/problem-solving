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

	int t;
	cin >> t;

	while (t--) {
		long long n, a, b, c;
		cin >> n >> a >> b >> c;

		long long l = 0, r = 1e9, ans = 0;
		while (l <= r) {
			long long mid = (l + r) / 2;
			long long wholeSeq = mid / 3;
			long long rest = mid % 3;
			long long totalKm = (a + b + c) * wholeSeq;

			if(rest == 1) {
				totalKm += a;
			} else if(rest == 2) {
				totalKm +=(a + b);
			} 

			if(totalKm >= n) {
				ans = mid;
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}

		cout << ans << endl;
	}

	return 0;
}