#include <iostream>
using namespace std;

int main(){
    int N,W; cin >> N >> W;
    vector<int> a(N);
    for(int i = 0; i < N; ++i){
        cin >> a[i];
    }

    bool exist = false;
    for(int x = 0; x < N; ++x){
        int sum = 0;
        for(int i = 0; i < N; ++i){
            if(x & (1 << i)){
                sum += a[i];
            }
        }
        if(sum == W) exist = true;
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}