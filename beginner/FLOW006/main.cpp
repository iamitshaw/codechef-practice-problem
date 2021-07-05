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
        /* get number */
        int32_t number;
        std::cin >> number;

        /* find out digit_sum */
        int32_t digit_sum{0};

        while (number != 0) {
            /* extract last digit */
            digit_sum += (number % 10);

            /* eliminate processed digit */
            number /= 10;
        }

        /* print digit_sum */
        std::cout << digit_sum << std::endl;
    }
    return 0;
}