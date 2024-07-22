#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<string>> S(H, vector<string>(W));
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j ++){
            cin >> S[i][j];
        }
    }
    
}