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
        /* get length_of_land */
        int32_t length;
        std::cin >> length;

        /* get breadth_of_land */
        int32_t breadth;
        std::cin >> breadth;

        /* calculate side_of_square_plots */
        int32_t t{std::__gcd(length, breadth)};

        /* print appropriate message */
        int32_t minimum_number_of_square_plots{(length*breadth)/(t*t)};
        std::cout << minimum_number_of_square_plots << std::endl;
    }
    return 0;
}
