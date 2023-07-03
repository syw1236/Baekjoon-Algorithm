#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	int a[26] = {};
	for (auto c : s1)
		a[c - 'a']++;
	for (auto c : s2)
		a[c - 'a']--;
	int cnt = 0;
	for (int i : a) {
		if (i != 0)
			cnt += abs(i);
	}
	cout << cnt;
}