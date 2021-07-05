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

        if (number == 0) {
            std::cout << '1' << std::endl;
        } else {
            /* factorial_value */
            int64_t factorial{1};
            for (int32_t i{1};i <= number;i++) {
                factorial *= i;
            }

            /* print appropriate message */
            std::cout << factorial << std::endl;
        }
    }
    return 0;
}