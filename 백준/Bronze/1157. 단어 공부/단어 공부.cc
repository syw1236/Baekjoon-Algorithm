#include <iostream>
#include <string>
using namespace std;

int n[26];
int N[26];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	char max_c=' ';
	int max = -1;
	cin >> s;
	for (auto c : s) {
		if (c >= 'a' && c <= 'z') {
			n[c - 'a']++;
		}
		else {
			N[c - 'A']++;
		}	
	}
	for (int i = 0; i < 26; i++) {
		if (max < (n[i]+N[i])) {
			max = n[i]+N[i];
			max_c = 'A' + i;
		}
	}
	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (max == (n[i]+N[i])) {
			count++;
			if (count > 1) {
				cout << "?";
				return 0;
			}			
		}
	}
	cout << max_c;

}