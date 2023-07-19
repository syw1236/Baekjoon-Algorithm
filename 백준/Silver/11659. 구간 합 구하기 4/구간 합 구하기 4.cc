#include <iostream>
using namespace std;

int a[100001];
int s[100001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m,i,j;
	cin >> n >> m;
	for (int idx = 1; idx <= n; idx++) {
		cin >> a[idx];
		s[idx] = s[idx-1] + a[idx];
	}
	for (int idx = 0; idx < m; idx++) {
		cin >> i >> j;
		cout << s[j] - s[i - 1] << '\n';
	}
}