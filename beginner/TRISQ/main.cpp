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
        /* get base_of_triangle */
        int32_t base_of_triangle;
        std::cin >> base_of_triangle;

        int32_t M{base_of_triangle/2};

        int32_t number_of_squares{(M * (M - 1))/2};

        /* print number_of_squares that can be fit
         * inside right-angled isosceles triangle */
        std::cout << number_of_squares << std::endl;
    }
    return 0;
}