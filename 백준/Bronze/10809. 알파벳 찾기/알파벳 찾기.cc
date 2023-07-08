#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < 26; i++) {
		int idx = s.find(char('a' + i));
		cout << idx << ' ';
	}
}