#include <bits/stdc++.h>

int32_t common_ingredients_quantity(int32_t * ingredients, int32_t& numberOfIngredients) {
    int32_t gcd_of_list_ingredients{ingredients[0]};

    for (int32_t i{1}; i < numberOfIngredients; i++) {
        gcd_of_list_ingredients = std::__gcd(ingredients[i], gcd_of_list_ingredients);

        if (gcd_of_list_ingredients == 1) {
            /* if greatest common divisor is equal to 1
             * then no further processing is required */
            break;
        }
    }
    return gcd_of_list_ingredients;
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get number_of_ingredients */
        int32_t number_of_ingredients;
        std::cin >> number_of_ingredients;

        /* ingredients array */
        auto* recipe_ingredients = new int32_t[number_of_ingredients];

        /* get recipe ingredients */
        for (int32_t i{0};i < number_of_ingredients;i++) {
            std::cin >> recipe_ingredients[i];
        }

        /* evaluate common quantity among ingredients */
        int32_t common_ingredients_ratio{common_ingredients_quantity(recipe_ingredients, number_of_ingredients)};

        /* print recipe ingredients after removing common quantity */
        for (size_t i{0};i < number_of_ingredients;i++) {
            std::cout << (recipe_ingredients[i] / common_ingredients_ratio) << " ";
        }

        /* move cursor to next-line */
        std::cout << std::endl;

        /* de-allocate heap memory */
        delete [] recipe_ingredients;
    }
    return 0;
}