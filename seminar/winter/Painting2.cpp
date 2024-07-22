#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int> > A(H, vector<int>(W));
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> A[i][j];
        }
    }

    int maxscore = 0;
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            int tareget = A[i][j];

            int score = 0;
            for (int x = 0; x < H; x++){
                for (int y = 0; y < W; y++){
                    if (A[x][y] == tareget){
                        score++;
                    }
                }
            }
            maxscore = max(maxscore, score);
        }
    }
    cout << maxscore << endl;

    return 0;
}