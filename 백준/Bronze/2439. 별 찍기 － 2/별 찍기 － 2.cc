#include <iostream>
using namespace std;

int main() {
	int n,j=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (j = 0; j < n-(i+1); j++) {
			cout << " ";
		}
		for (; j < n; j++)
			cout << "*";
		cout << "\n";
	}
}