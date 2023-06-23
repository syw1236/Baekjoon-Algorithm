#include <iostream>
using namespace std;

int main() {
	int n,num;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[i] = num;
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << min << " " << max;
}