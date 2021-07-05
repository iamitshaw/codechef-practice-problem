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
        /* get number_of_cupcakes */
        int32_t number_of_cupcakes;
        std::cin >> number_of_cupcakes;

        /* package size should equals half_of_cupcakes
         * formed to maximize left_overs cup_cakes */
        std::cout << ((number_of_cupcakes / 2) + 1) ;
        std::cout << std::endl;
    }
    return 0;
}