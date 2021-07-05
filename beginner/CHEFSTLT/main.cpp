#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get first_string */
        std::string first_string;
        std::cin >> first_string;

        /* get second_string */
        std::string second_string;
        std::cin >> second_string;

        /* evaluate minimal_difference && maximal_difference */
        int32_t minimal_difference{0};int32_t maximal_difference{0};

        for (int32_t i{0};first_string[i] != '\0';i++) {
            if (first_string[i] == '?' or second_string[i] == '?') {
                maximal_difference += 1;
            } else if (first_string[i] != second_string[i]) {
                minimal_difference += 1;
                maximal_difference += 1;
            }
        }

        /* print appropriate message */
        std::cout << minimal_difference << " " ;
        std::cout << maximal_difference << std::endl;
    }
    return 0;
}