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
        /* get year_of_snack_down */
        int32_t year_of_snack_down;
        std::cin >> year_of_snack_down;

        switch (year_of_snack_down) {
            case 2010:
            case 2015:
            case 2016:
            case 2017:
            case 2019:
                /* if snack-down has occurred in specified year */
                std::cout << "HOSTED" << std::endl;
                break;
            default:
                /* if snack-down hasn't occurred in specified year */
                std::cout << "NOT HOSTED" << std::endl;
                break;
        }
    }
    return 0;
}