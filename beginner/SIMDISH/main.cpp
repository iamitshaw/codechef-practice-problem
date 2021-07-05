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
        /* get total_ingredients */
        int32_t total_ingredients{4};

        /* get ingredients_of_first_dish */
        std::vector<std::string> ingredients_of_first(total_ingredients);
        for (int32_t i{0}; i < total_ingredients; i++) {
            std::cin >> ingredients_of_first.at(i);
        }

        /* get ingredients_of_second_dish */
        std::vector<std::string> ingredients_of_second(total_ingredients);
        for (int32_t i{0}; i < total_ingredients; i++) {
            std::cin >> ingredients_of_second.at(i);
        }

        /* find out whether both dishes are similar */
        int32_t similar_ingredients{0};bool is_similar_dish{false};
        for (int32_t i{0};i < total_ingredients;i++) {
            for (int32_t j{0};j < total_ingredients;j++) {
                if (ingredients_of_first[i] == ingredients_of_second[j]) {
                    similar_ingredients += 1;break;
                }
            }

            /* if half of ingredients are similar in both dishes */
            if (similar_ingredients >= total_ingredients/2) {
                is_similar_dish = {true};break;
            }
        }

        /* print appropriate message */
        std::cout << (is_similar_dish? "similar\n": "dissimilar\n");
    }
    return 0;
}