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
        /* get number_of_cats */
        int64_t number_of_cats;
        std::cin >> number_of_cats;

        /* get number_of_dogs */
        int64_t number_of_dogs;
        std::cin >> number_of_dogs;

        /* get number_of_legs */
        int64_t number_of_legs;
        std::cin >> number_of_legs;

        /* evaluate whether chef's counting was right or not */
        if (number_of_legs % 4 == 0) {
            /* as dogs are on ground */
            int64_t left_number_of_legs = number_of_legs - 4*number_of_dogs;

            int64_t cat_legs_on_ground{4*number_of_cats - 8*number_of_dogs};

            /* if all cats can ride on dogs back */
            if (cat_legs_on_ground < 0) {
                cat_legs_on_ground = 0;
            }

            /* print appropriate message */
            if (left_number_of_legs >= cat_legs_on_ground &&
                left_number_of_legs <= 4*number_of_cats) {
                std::cout << "yes\n";
            } else {
                std::cout << "no\n";
            }
        } else {
            std::cout << "no\n";
        }
    }
    return 0;
}