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
        /* get number_of_transactions */
        int32_t number_of_transactions;
        std::cin >> number_of_transactions;

        /* get amount_of_money */
        int32_t amount_of_money;
        std::cin >> amount_of_money;

        /* get transaction_amounts */
        std::vector<int32_t> transactions(number_of_transactions);
        for (int32_t i{0};i < number_of_transactions;i++) {
            std::cin >> transactions.at(i);
        }

        for (const auto& money: transactions) {
            if ((amount_of_money - money) >= 0) {
                /* transaction is successful */
                amount_of_money -= money;
                std::cout << "1";
            } else {
                /* transaction isn't successful */
                std::cout << "0";
            }
        }
        /* move cursor to next-line */
        std::cout << std::endl;
    }
    return 0;
}