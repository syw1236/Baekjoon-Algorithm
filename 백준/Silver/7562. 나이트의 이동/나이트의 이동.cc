#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second
int dist[304][304];
int dx[8] = { 2,1,-1,-2,-2,-1,1,2 };
int dy[8] = { 1,2,2,1,-1,-2,-2,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,w,st_x,st_y,ar_x,ar_y;
	queue<pair<int, int>>Q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w;//한변의 길이
		for (int j = 0; j < w; j++) {
			fill(dist[j], dist[j] + w, -1);
		}
		cin >> st_x >> st_y;
		cin >> ar_x >> ar_y;
		dist[st_x][st_y] = 0;
		Q.push({ st_x,st_y });
		while (!Q.empty()) {
			auto c = Q.front(); Q.pop();
			for (int i = 0; i < 8; i++) {
				int nx = c.X + dx[i];
				int ny = c.Y + dy[i];
;				if (nx < 0 || nx >= w || ny < 0 || ny >= w)continue;
				if (dist[nx][ny] >=0)continue;
				dist[nx][ny] = dist[c.X][c.Y] + 1;
				Q.push({ nx,ny });
			}
		}
		cout << dist[ar_x][ar_y] << '\n';
	}
	
}
