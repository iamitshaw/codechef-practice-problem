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
        /* get number_of_points */
        int32_t number_of_points;
        std::cin >> number_of_points;

        int32_t point_x, point_y;
        for (int32_t i{0};i < number_of_points;i++) {
            std::cin >> point_x >> point_y;
        }

        /* evaluate required permutation */
        int32_t result{0};
        for (int32_t i{1};i <= number_of_points;i++) {
            result ^= i;
        }

        /* print appropriate message */
        std::cout << result << std::endl;
    }
    return 0;
}