#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second
string board[102];
int dist[102][102];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	queue<pair<int, int>>Q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	for (int i = 0; i < n; i++) {
		fill(dist[i], dist[i] + m, -1);
	}
	dist[0][0] = 0;
	Q.push({ 0,0 });
	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx<0 || nx>=n || ny<0 || ny>=m)continue;
			if (dist[nx][ny] >=0 || board[nx][ny] != '1')continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}
	cout << dist[n - 1][m - 1]+1;//초기 위치의 값도 저장필요하므로!
}