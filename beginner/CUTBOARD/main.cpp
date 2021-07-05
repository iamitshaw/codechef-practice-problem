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
        /* get number_of_row */
        int32_t number_of_row;
        std::cin >> number_of_row;

        /* get number_of_column */
        int32_t number_of_column;
        std::cin >> number_of_column;

        /* evaluate maximum_cut_edge */
        int32_t maximum_cut{(number_of_row - 1)*(number_of_column-1)};

        /* print appropriate message */
        std::cout << maximum_cut << std::endl;
    }
    return 0;
}