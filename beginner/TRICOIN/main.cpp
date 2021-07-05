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
        /* get number_of_gold_coins */
        int64_t number_of_gold_coins;
        std::cin >> number_of_gold_coins;

        /* evaluate maximum_height */
        int32_t maximum_height=(std::sqrt(1 + 8*number_of_gold_coins)-1)/2;

        /* print maximum_height */
        std::cout << maximum_height << std::endl;
    }
    return 0;
}