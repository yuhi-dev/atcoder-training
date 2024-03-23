#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

void dfs(vector<vector<int>> &G, int s, vector<bool> &seen){

    seen[s] = true;
    for(int i = 0; i < G[s].size(); i++){
        int v = G[s][i];
        if(seen[v]) continue;
        dfs(G, v, seen);
    }
}

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> G(N);
  for(int i = 0; i < M; i++){
    int u, v;
    cin >> u >> v;
    --u, --v;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  int ans = 0;
  vector<bool> seen(N);
  for(int i = 0; i < N; i++){
    if(seen[i]) continue;
    ans++;
    dfs(G, i, seen);
  }
  cout << ans << endl;

  cout << ans << endl;
  return 0;
}