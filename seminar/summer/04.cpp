#include <iostream>
#include <vector>
#include <algorithm>

struct Item {
    int weight;
    int value;
};

int knapsack(int N, int W, const std::vector<Item>& items) {
    std::vector<std::vector<int> >dp(N + 1, std::vector<int>(W + 1, 0));

    for (int i = 1; i <= N; ++i) {
        for (int w = 1; w <= W; ++w) {
            if (items[i - 1].weight <= w) {
                dp[i][w] = std::max(dp[i - 1][w], dp[i - 1][w - items[i - 1].weight] + items[i - 1].value);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[N][W];
}

int main() {
    int N, W;
    std::cin >> N >> W;

    std::vector<Item> items(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> items[i].weight >> items[i].value;
    }

    int maxValue = knapsack(N, W, items);
    std::cout << "Maximum value: " << maxValue << std::endl;

    return 0;
}
