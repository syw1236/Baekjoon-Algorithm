#include <iostream>
#include <string>
#include <list>
#include <sstream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1, e;
	int n;
	cin >> s1;
	list<char> L;
	list<char>::iterator t = L.end();
	for (auto c : s1)
		L.push_back(c);
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, e);
		if (e == "L") {
			if(t != L.begin())
				t--;	
		}
		else if (e == "D") {
			if(t!=L.end())
				t++;
		}
		else if (e == "B") {
			if (t != L.begin()) {
				t = L.erase(--t);
			}
		}
		else {
			stringstream ss(e);
			char p, value;
			ss >> p >> value;
			if (p == 'P') {
				L.insert(t, value);
			}
		}
	}
	for (auto c : L)
		cout << c;

}