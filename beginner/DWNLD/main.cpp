#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get N */
        int32_t N;
        std::cin >> N;

        /* get K */
        int32_t K;
        std::cin >> K;

        /* get minutes used at data rate for those minutes */
        std::vector<std::pair<int32_t, int32_t>> array(N);
        for (int32_t i{0};i < N;i++) {
            std::cin >> array.at(i).first;
            std::cin >> array.at(i).second;
        }

        /* process free_minutes */
        int32_t i{0};
        while (i < N && (K - array.at(i).first) > 0) {
            K -= array.at(i).first;i += 1;
        }

        /* process paid_data */
        int32_t total_data_used{0};
        if (i < N) {
            total_data_used += (array[i].first - K) * array[i].second;
            i += 1;
            while (i < N) {
                total_data_used += array[i].first * array[i].second;
                i += 1;
            }
        }

        /* print appropriate message */
        std::cout << total_data_used << std::endl;
    }
    return 0;
}