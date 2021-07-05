#include <bits/stdc++.h>

int32_t digit_count(int32_t number) {
    /* store total_occurrence_of_digit 4 */
    int32_t count_occurrence{0};

    /* navigate through each digit */
    while (number != 0) {
        if (number % 10 == 4) {
            /* if processed digit equals 4 */
            count_occurrence += 1;
        }

        /* eliminate processed digit */
        number /= 10;
    }
    return count_occurrence;
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_of_integers */
    int32_t number_of_integers;
    std::cin >> number_of_integers;

    while (number_of_integers--) {
        /* get number */
        int32_t number;
        std::cin >> number;

        /* find out total_occurrence_of_digit 4 */
        int32_t count_occurrence {digit_count(number)};

        /* print total_occurrence_of_digit 4 */
        std::cout << count_occurrence << std::endl;
    }
    return 0;
}