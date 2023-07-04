#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	stack<int> S;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push") {
			int add;
			cin >> add;
			S.push(add);
		}
		else if (s == "top") {
			if (S.empty())
				cout << -1 << '\n';
			else
				cout << S.top() << '\n';
		}
		else if (s == "pop") {
			if (S.empty())
				cout << -1 << '\n';
			else {
				cout << S.top() << '\n';
				S.pop();
			}
			
		}
		else if (s == "size") {
			cout << S.size() << '\n';
		}
		else if (s == "empty") {
			if (S.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
	}
}