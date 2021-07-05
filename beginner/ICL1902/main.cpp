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
        /* get number_of_circles */
        int32_t number_of_circles;
        std::cin >> number_of_circles;

        /* evaluate number_of_squares */
        int32_t number_of_squares{0};
        while (number_of_circles > 0) {
            int32_t side_of_square=std::sqrt(number_of_circles);

            /* left number_of_circles */
            number_of_circles -= (side_of_square * side_of_square);

            /* update number_of_square formed */
            number_of_squares += 1;
        }

        /* print appropriate message */
        std::cout << number_of_squares << std::endl;
    }
    return 0;
}