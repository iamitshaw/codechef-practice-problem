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
        /* get number_of_coin */
        int32_t number_of_coin;
        std::cin >> number_of_coin;

        /* get number_of_people */
        int32_t number_of_people;
        std::cin >> number_of_people;

        int32_t maximum_dog_coin{number_of_coin % number_of_people};

        /* evaluate maximum coin obtained by Tuzik */
        for (int32_t i{number_of_people-1};i > maximum_dog_coin;i--) {
            /* if i number_of_people have gathered then
             * Tuzik will get coin equals temp_dog_coin */
            int32_t temp_dog_coin{number_of_coin % i};

            if (temp_dog_coin > maximum_dog_coin) {
                maximum_dog_coin = temp_dog_coin;
            }
        }

        /* print appropriate message */
        std::cout << maximum_dog_coin << std::endl;
    }
    return 0;
}