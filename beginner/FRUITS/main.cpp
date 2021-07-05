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
        /* get number_of_apples */
        int32_t number_of_apples;
        std::cin >> number_of_apples;

        /* get number_of_oranges */
        int32_t number_of_oranges;
        std::cin >> number_of_oranges;

        /* get number_of_gold_coins */
        int32_t number_of_gold_coins;
        std::cin >> number_of_gold_coins;

        /* evaluate absolute difference between
         * number_of_apples & number_of_oranges */
        int32_t minimum_difference{std::abs(number_of_apples - number_of_oranges)};

        if (number_of_gold_coins >= minimum_difference) {
            /* if chef has more gold coin than required then
             * buy only minimum_difference number of item */
            std::cout << "0" << std::endl;
        } else {
            /* if gold coin isn't enough then minimize the difference */
            std::cout << (minimum_difference - number_of_gold_coins) << std::endl;
        }
    }
    return 0;
}