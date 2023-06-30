#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int input,sum=0,arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> input;
		arr[i] = input;
		sum += input;
	}
	sort(arr,arr+5);
	cout << sum / 5 << "\n" << arr[5 / 2];
}