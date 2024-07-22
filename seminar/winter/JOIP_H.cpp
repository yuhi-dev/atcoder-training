#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 1000000000;
int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }
  int mx = 0, mn = INF;
  for (int i = 0; i < N; i++){
    mx = max(mx, A[i]);
    mn = min(mn, A[i]);
  }
  for (int i = 0; i < N; i++){
    cout << max(A[i] - mn, mx - A[i]) << endl;
  }
  return 0;
}
