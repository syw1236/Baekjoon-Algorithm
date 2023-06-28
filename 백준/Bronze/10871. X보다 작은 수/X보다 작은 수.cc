#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	int arr[100000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j< n; j++) {
		if (arr[j] < x) {
			cout << arr[j];
			cout << ' ';
		}
		
	}
}