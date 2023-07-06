#include <iostream>
#include <queue>
#include<utility>
#include <algorithm>
using namespace std;

#define X first
#define Y second
int dist[100001];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	queue<int>Q;
	cin >> n >> m;
	fill(dist, dist + 100001, -1);
	dist[n] = 0;
	Q.push(n);
	while (dist[m]==-1){
		auto cur = Q.front(); Q.pop();
		for (int i : {cur - 1, cur + 1, 2*cur}) {
			if (i < 0 || i>100000)continue;
			if (dist[i] != -1)continue;
			dist[i] = dist[cur] + 1;
			Q.push(i);
		}
	}
	cout << dist[m];
}