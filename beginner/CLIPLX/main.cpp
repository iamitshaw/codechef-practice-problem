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

        /* get number_of_matches */
        int32_t number_of_matches;
        std::cin >> number_of_matches;

        int32_t matches_to_win{0};
        if (number_of_points <= number_of_matches) {
            /* it is possible to tie (number_of_points) matches */
            matches_to_win = {0};
        } else {
            matches_to_win = {number_of_points-number_of_matches};
        }

        /* print appropriate message */
        std::cout << matches_to_win << std::endl;
    }
    return 0;
}