#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get withdrawal amount */
    int32_t withdrawal;
    std::cin >> withdrawal;

    /* get initial_account_balance */
    double_t initial_balance;
    std::cin >> initial_balance;

    /* bank_charge per transaction */
    const double_t bank_charge{0.50};

    /* if requirement is satisfied by withdrawal amount and
     * sufficient money is available then perform transaction */
    if (withdrawal % 5 == 0 && (withdrawal + bank_charge) <= initial_balance) {
        std::cout << std::fixed << std::setprecision(2) ;
        std::cout << (initial_balance - withdrawal - bank_charge);
    } else {
        /* if there isn't sufficient money in account to complete
         * transaction then output current bank balance of user */
        std::cout << initial_balance;
    }
    return 0;
}