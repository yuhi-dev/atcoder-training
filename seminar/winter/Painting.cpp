#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> A[i][j];
        }
    }

    std::vector<std::vector<int>> C(H, std::vector<int>(W, -1));
  int N = 0;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      if (C[i][j] == -1){
        C[i][j] = N;
        std::queue<std::pair<int, int>> Q;
        Q.push(std::make_pair(i, j));
        while (!Q.empty()){
          int x = Q.front().first;
          int y = Q.front().second;
          Q.pop();
          for (int k = 0; k < 4; k++){
            int x2 = x + dx[k];
            int y2 = y + dy[k];
            if (0 <= x2 && x2 < H && 0 <= y2 && y2 < W){
              if (A[x2][y2] == A[x][y] && C[x2][y2] == -1){
                C[x2][y2] = N;
                Q.push(std::make_pair(x2, y2));
              }
            }
          }
        }
        N++;
      }
    }
  }
  std::vector<int> B(N), S(N, 0);
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      B[C[i][j]] = A[i][j];
      S[C[i][j]]++;
    }
  }
  std::vector<std::vector<int>> E(N);
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      if (i < H - 1){
        if (C[i][j] != C[i + 1][j]){
          E[C[i][j]].push_back(C[i + 1][j]);
          E[C[i + 1][j]].push_back(C[i][j]);
        }
      }
      if (j < W - 1){
        if (C[i][j] != C[i][j + 1]){
          E[C[i][j]].push_back(C[i][j + 1]);
          E[C[i][j + 1]].push_back(C[i][j]);
        }
      }
    }
  }
  for (int i = 0; i < N; i++){
    std::sort(E[i].begin(), E[i].end());
    E[i].erase(std::unique(E[i].begin(), E[i].end()), E[i].end());
  }
  int ans = 0;
  for (int i = 0; i < N; i++){
    int cnt = E[i].size();
    std::map<int, int> mp;
    for (int j = 0; j < cnt; j++){
      mp[B[E[i][j]]] += S[E[i][j]];
    }
    ans = std::max(ans, S[i]);
    for (std::pair<int, int> P : mp){
      ans = std::max(ans, S[i] + P.second);
    }
  }
  std::cout << ans << std::endl;

}