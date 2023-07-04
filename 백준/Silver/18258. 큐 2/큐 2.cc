#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	queue<int> Q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int add;
			cin >> add;
			Q.push(add);
		}
		else if (s == "pop") {
			if (!Q.empty()) {
				cout << Q.front() << '\n';
				Q.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (s == "size")
			cout << Q.size() << '\n';
		else if (s == "empty") 
			cout << Q.empty() << '\n';
		else if (s == "front") {
			if (!Q.empty())
				cout << Q.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (s == "back") {
			if (!Q.empty())
				cout << Q.back() << '\n';
			else cout << -1 << '\n';
		}
	}
}