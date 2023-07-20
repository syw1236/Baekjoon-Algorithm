#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	stack<int>S;
	S.push(0);
	cin >> n;
	vector<int> A(n + 1, 0);
	vector<int>ans(n + 1, 0);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		while (!S.empty() && A[S.top()] < A[i]) {
			ans[S.top()] = A[i];
			S.pop();
		}
		S.push(i);
	}
	while (!S.empty()) {
		ans[S.top()] = -1;
		S.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << ' ';
	}
}
