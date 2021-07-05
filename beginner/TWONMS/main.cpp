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
        /* get number_A */
        int32_t number_A;
        std::cin >> number_A;

        /* get number_B */
        int32_t number_B;
        std::cin >> number_B;

        /* get total_turns */
        int32_t total_turns;
        std::cin >> total_turns;

        if (total_turns % 2 != 0) {
            /* total_turns is odd */
            number_A *= 2;
        }

        /* evaluate max */
        int32_t max{std::max(number_A, number_B)};

        /* evaluate min */
        int32_t min{std::min(number_A, number_B)};

        /* print appropriate message */
        std::cout << max/min << std::endl;
    }
    return 0;
}