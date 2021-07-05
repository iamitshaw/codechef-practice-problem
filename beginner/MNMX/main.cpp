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
        /* get array_size */
        int64_t array_size;
        std::cin >> array_size;

        /* get array_elements */
        std::vector<int32_t> array(array_size);
        for (int64_t i{0};i < array_size;i++) {
            std::cin >> array.at(i);
        }

        /* find minimum element */
        auto minimum_element{std::min_element(array.begin(), array.end())};

        /* evaluate total_cost */
        int64_t total_cost{(*minimum_element) * (array_size - 1)};

        /* print appropriate message */
        std::cout << total_cost << std::endl;
    }
    return 0;
}