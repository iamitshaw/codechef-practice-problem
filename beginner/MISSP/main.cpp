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
        /* get number_of_dolls */
        int32_t number_of_dolls;
        std::cin >> number_of_dolls;

        /* get type_of_left_dolls */
        std::vector<int32_t> type_of_left_dolls(number_of_dolls);
        for (int32_t i{0};i < number_of_dolls;i++) {
            std::cin >> type_of_left_dolls.at(i);
        }

        /* evaluate type_of_stolen_doll */
        int32_t type_of_stolen_doll{type_of_left_dolls.at(0)};
        for (int32_t i{1};i < number_of_dolls;i++) {
            type_of_stolen_doll ^= type_of_left_dolls.at(i);
        }

        /* print type_of_stolen_doll */
        std::cout << type_of_stolen_doll << std::endl;
    }
    return 0;
}