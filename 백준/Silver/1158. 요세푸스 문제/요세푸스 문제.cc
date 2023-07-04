#include <iostream>
#include <list>
using namespace std;
int arr[5000];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	list<int> L;
	for (int i = 1; i <= n; i++) {
		L.push_back(i);
	}
	cout << '<';
	auto first = L.begin();
	auto move = L.begin();
	while (L.size()!=1) {
		int num = k-1;
		while (num--) {
			move++;
			if (move == L.end()) {
				move = L.begin();
			}
		}
		cout << *move << ", ";
		move = L.erase(move);
		if (move == L.end())
			move = L.begin();
	}
	cout << *move << '>';
}