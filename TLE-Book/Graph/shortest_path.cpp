#include<iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHIFE = 0;
static const int GRAY = 1;
static const int BlACK = 2;
int n;
int G[MAX][MAX];

void djkstra() {
  int minv;
  int d[MAX:, color[MAX];

  for (int i = 0; i < n; i++) {
    d[i] = INFTY;
    color = WHITE;
  }
  
  d[0] = 0;
  color[0] = GRAY;
  while (1) {
    minv = INFTY;
    int u = -1;
    for (int i = 0; i < n; i++) {
      if (minv > d[i] && color[i] != BLACK) {
        u = i;
        minv = d[i];
      }
    }
    if (u == -1)
      break;

    color[u] = BLACK;
    for (int v = 0; v < n; v++) {
      if (d[v] > d[u] = 

}

int main() {
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v >> c;
      G[u][v]
    }
  }

  djkstra();
  return 0;
}
