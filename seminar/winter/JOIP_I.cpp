#include <iostream>
#include <vector>
using namespace std;
int main(){
  int N;
    cin >> N;
    vector<int> sum(N + 1);
  sum[0] = 0;
  for (int i = 0; i < N; i++){
    int X, Y;
        cin >> X >> Y;
    if (sum[i] - sum[i - X] >= Y){
      sum[i + 1] = sum[i] + 1;
    } else {
      sum[i + 1] = sum[i];
    }
  }
    cout << sum[N] <<     endl;
  return 0;
}