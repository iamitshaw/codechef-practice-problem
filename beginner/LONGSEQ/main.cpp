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
        /* get binary_string */
        std::string binary_string;
        std::cin >> binary_string;

        int32_t occurrence_of_zero{0};
        int32_t occurrence_of_one{0};

        /* evaluate occurrence of binary digit */
        for (const auto& digit:binary_string) {
            if (digit == '1') {
                occurrence_of_one += 1;
            } else {
                occurrence_of_zero += 1;
            }
        }

        /* print appropriate message */
        if (occurrence_of_zero == 1 or occurrence_of_one == 1) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}