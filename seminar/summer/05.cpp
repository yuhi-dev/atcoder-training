#include <iostream>
#include <vector>

int findIndex(const std::vector<int>& arr, int K) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1; // 初期値として -1 を設定

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= K) {
            result = mid; // 条件を満たす場合、結果を更新して探索を続ける
            right = mid - 1; // インデックス i が最小であるような場合、もっと左を探索
        } else {
            left = mid + 1; // 条件を満たさない場合、右側を探索
        }
    }

    return result;
}

//int main() {
//    std::vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
//    int K = 9;

//    int result = findIndex(arr, K);

//    if (result != -1) {
//        std::cout << "条件を満たす最小のインデックス: " << result << std::endl;
//    } else {
//        std::cout << "条件を満たすインデックスは存在しません。\n";
//    }

//    return 0;
//}
