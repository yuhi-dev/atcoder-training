#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector<int> B(M);
    for (int j = 0; j < M; j++){
        cin >> B[j];
    }
    int ans = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (A[i] <= B[j]){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}