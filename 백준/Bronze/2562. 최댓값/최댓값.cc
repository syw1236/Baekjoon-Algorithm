#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a=0,index;
	int c[9];
	for (int i = 0; i < 9; i++) {
		cin >>c[i];
		if (a < c[i]) {
			a = c[i];
			index = i+1;
		}
	}
	cout << a << "\n" << index;
}