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
        /* get quantity_of_item_purchased */
        int32_t quantity_of_item_purchased;
        std::cin >> quantity_of_item_purchased;

        /* get price_per_item */
        int32_t price_per_item;
        std::cin >> price_per_item;

        /* evaluate total_expenses */
        double_t total_expenses = quantity_of_item_purchased * price_per_item;

        if (quantity_of_item_purchased > 1000) {
            /* 10% discount is provided to user iff
             * quantity_of_item_purchased > 1000 */
            double_t discount{total_expenses * 0.1};

            total_expenses -= discount;
        }

        /* print total_expenses */
        std::cout << std::fixed << total_expenses << std::endl;
    }
    return 0;
}