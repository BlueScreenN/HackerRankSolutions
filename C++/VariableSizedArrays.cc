#include <iostream>
#include <vector>

int main() {
    int n, q;
    std::cin >> n >> q;

    std::vector<std::vector<int>> arrays(n);

    for (int i = 0; i < n; i++) {
        int k;
        std::cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; j++) {
            std::cin >> arrays[i][j];
        }
    }

    std::vector<int> results;

    for (int i = 0; i < q; i++) {
        int arrayIndex, elementIndex;
        std::cin >> arrayIndex >> elementIndex;
        results.push_back(arrays[arrayIndex][elementIndex]);
    }

    for (int result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}
