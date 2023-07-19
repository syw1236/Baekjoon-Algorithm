#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s[100001] = {};
	int n, m,i,j;
	cin >> n >> m;
	for (int idx = 1; idx <= n; idx++) {
		int temp;
		cin >> temp;
		s[idx] = s[idx-1] + temp;
	}
	for (int idx = 0; idx < m; idx++) {
		cin >> i >> j;
		cout << s[j] - s[i - 1] << '\n';
	}
}