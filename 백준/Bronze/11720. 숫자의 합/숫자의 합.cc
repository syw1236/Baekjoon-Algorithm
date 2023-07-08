#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,cnt=0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cnt += s[i] - '0';
	}
	cout << cnt;
}