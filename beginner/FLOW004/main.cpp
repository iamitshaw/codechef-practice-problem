#include <bits/stdc++.h>

int32_t sum_of_first_and_last_digit(int32_t number) {
    /* define first_digit & last_digit */
    int32_t first_digit {number % 10}, last_digit{0};

    /* evaluate last_digit */
    while (number != 0) {
        /* processed_digit as last_digit */
        last_digit = number % 10;

        /* eliminate processed last_digit */
        number /= 10;
    }
    return (first_digit + last_digit);
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while(test_case--) {
        /* get number */
        int32_t number;
        std::cin >> number;

        /* find out sum_of_first_and_last digit */
        int32_t sum_of_first_last = sum_of_first_and_last_digit(number);

        /* print sum_of_first_and_last digit */
        std::cout << sum_of_first_last << std::endl;
    }
    return 0;
}