#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while(test_case--) {
        /* get positive_integer */
        int32_t positive_integer;
        std::cin >> positive_integer;

        /* find out total_menu_item */
        int32_t total_menu_item{0};

        for (int32_t i{2048};i >= 1;i /= 2) {
            /* get total_item of menu with price i */
            int32_t total_item{positive_integer/i};

            total_menu_item += total_item;
            positive_integer -= (total_item * i);
        }
        /* print total_menu_item */
        std::cout << total_menu_item << std::endl;
    }
    return 0;
}