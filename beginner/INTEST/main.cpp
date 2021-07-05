#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_of_element */
    int32_t number_of_element;
    std::cin >> number_of_element;

    /* get divisor_element */
    int32_t divisor_element;
    std::cin >> divisor_element;

    /* get total numbers which are
     * multiple of divisor_element */
    int32_t number, total_count_of_multiples{0};

    for (int32_t i{1};i <= number_of_element;i++) {
        /* get number */
        std::cin >> number;
        if ((number % divisor_element) == 0) {
            /* if number under consideration is
             * divisible by divisor_element */
            total_count_of_multiples += 1;
        }
    }

    /* print appropriate message */
    std::cout << total_count_of_multiples << std::endl;

    return 0;
}