#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	long cnt = 0;
	cin >> n >> m;

	vector<long>sum(n + 1, 0);
	vector<long>count(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		long tmp;
		cin >> tmp;
		sum[i] = (sum[i - 1] + tmp)%m;
		if (sum[i] == 0)
			cnt++;
		count[sum[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (count[i] > 1)
			cnt += count[i] * (count[i] - 1) / 2;
	}
	cout << cnt;

}