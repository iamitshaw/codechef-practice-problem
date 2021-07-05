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
        /* get first_number */
        int32_t first_number;
        std::cin >> first_number;

        /* get second_number */
        int32_t second_number;
        std::cin >> second_number;

        /* find out remainder */
        int32_t remainder {first_number % second_number};

        /* print remainder */
        std::cout << remainder << std::endl;
    }
    return 0;
}