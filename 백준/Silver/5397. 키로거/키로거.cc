#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	string s;
	char arrow=' ';
	cin >> n;
	for (int i = 0; i < n; i++) {
		list<char> L;
		auto cursor = L.begin();
		cin >> s;
		for (auto c : s) {
			if (c == '<') {
				if (cursor != L.begin()) {
					arrow = '<';
					cursor--;
				}
			}
			else if (c == '>') {
					if (cursor != L.end()) {
						arrow = '>';
						cursor++;
					}
			}
			else if (c == '-') {
					if (cursor != L.begin()) {
						cursor--;
						cursor = L.erase(cursor);
					}
			}
			else {
				L.insert(cursor, c);
			}
		}
		for (auto c : L) cout << c;
		cout << '\n';
	}
}