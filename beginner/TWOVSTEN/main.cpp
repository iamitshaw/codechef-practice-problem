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
        /* get initial_value */
        int32_t initial_value;
        std::cin >> initial_value;

        if (initial_value % 2 == 0 && initial_value % 5 == 0) {
            /* if initial_number is divisible by both 2 & 5 */
            std::cout << "0" << std::endl;
        } else if (initial_value % 5 == 0) {
            /* if initial_number is divisible by 5 */
            std::cout << "1" << std::endl;
        } else {
            std::cout << "-1" << std::endl;
        }
    }
    return 0;
}