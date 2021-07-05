#include <bits/stdc++.h>


bool is_prime(const int32_t& number) {
    if (number >= 0 && number <= 1) {
        /* exception case handling */
        return false;
    } else {
        if (number <= 3) {
            /* 2, 3 are prime numbers */
            return true;
        } else if (number % 2 == 0 or number % 3 == 0) {
            /* the algorithm can be improved further by observing that all
             * primes are of the form 6k ± 1, with the exception of 2 & 3 */
            return false;
        } else {
            /* skipping middle five numbers to reduce processing time */
            for (int32_t i{5}; i*i <= number;i += 6) {
                /* if number has single factor other than one and itself
                 * then number doesn't qualify for being a prime number */
                if (number % i == 0 or number % (i + 2) == 0) {
                    /* since, every prime number can be
                     * represented in form of (6n ± 1) */
                    return false;
                }
            }
            /* if number is is_prime */
            return true;
        }
    }
}

int32_t next_prime(int32_t number) {
    /* number_of_iteration required
     * to get the specified form */
    int32_t number_of_iteration{6 - (number % 6)};

    int32_t j{number};

    /* obtain specified form 6n-1 */
    for (int32_t i{1};i <= (number_of_iteration - 1); i++) {
        if (is_prime(j)) {
            /* if j is prime_number */
            return j;
        } else {
            j += 1;
        }
    }

    /* since, every prime number can be
     * represented in form of (6n ± 1) */
    while (true) {
        if (is_prime(j)) {
            /* if j is prime_number */
            return j;
        } else if (is_prime(j + 2)) {
            /* if (j+2) is prime_number */
            return (j + 2);
        } else {
            /* skipping middle five numbers
             * to reduce processing time */
            j += 6;
        }
    }
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
        /* get first_field_harvest */
        int32_t first_field_harvest;
        std::cin >> first_field_harvest;

        /* get second_field_harvest */
        int32_t second_field_harvest;
        std::cin >> second_field_harvest;

        int32_t total_harvest{first_field_harvest + second_field_harvest};

        /* evaluate required third_field_harvest */
        int32_t third_field_harvest{next_prime(total_harvest + 1) - total_harvest};

        /* print appropriate message */
        std::cout << third_field_harvest << std::endl;
    }
    return 0;
}