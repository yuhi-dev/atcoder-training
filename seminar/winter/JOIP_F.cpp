#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = N - 1; i >= 0; i--){
        cout << A[i] << endl;
    }
    return 0;
}