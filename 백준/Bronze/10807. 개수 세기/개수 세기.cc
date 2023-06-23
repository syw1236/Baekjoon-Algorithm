#include <iostream>
using namespace std;

int main() {
	int n,a,count=0;
	cin >> n;
	int* arr = new int[n]; //동적할당
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> a;
	for (int i = 0; i < n; i++) {
		if (arr[i] == a)
			count++;
	}
	cout << count;
}