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
        /* get required_pages for poetry */
        int32_t required_pages;
        std::cin >> required_pages;

        /* get pages_left in notebook */
        int32_t pages_left;
        std::cin >> pages_left;

        /* get budget_of_chef */
        int32_t budget_of_chef;
        std::cin >> budget_of_chef;

        /* get number_of_notebooks */
        int32_t number_of_notebooks;
        std::cin >> number_of_notebooks;

        /* structure of  notebook */
        struct Note_Book {
            int32_t price;
            int32_t pages;
        };

        /* get notebooks related information */
        std::vector<Note_Book> notebook(number_of_notebooks);
        for (int32_t i{0};i < number_of_notebooks;i++) {
            std::cin >> notebook[i].pages;
            std::cin >> notebook[i].price;
        }

        /* determine whether chef will buy or not */
        bool is_possible{false};
        for (int32_t i{0};i < number_of_notebooks;i++) {
            if (notebook[i].price <= budget_of_chef &&
            (pages_left + notebook[i].pages) >= required_pages) {
                is_possible = {true};break;
            }
        }

        /* print appropriate message */
        std::cout << (is_possible? "LuckyChef\n":"UnluckyChef\n");
    }
    return 0;
}