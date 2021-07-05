#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while(test_case--) {
        /* get number_of_cops */
        int32_t number_of_cops;
        std::cin >> number_of_cops;

        /* get X */
        int32_t X;
        std::cin >> X;

        /* get Y */
        int32_t Y;
        std::cin >> Y;

        std::vector<int32_t> cops_location(number_of_cops);

        /* get cops_location */
        for (size_t i{0}; i < number_of_cops; i++) {
            std::cin >> cops_location.at(i);
        }

        std::sort(cops_location.begin(), cops_location.end());

        int32_t safe_house{0};

        /* location of safe house
         * from cops reviewed */
        int32_t lower_limit{1}, distance{X * Y};

        for (int32_t i{0}; i < number_of_cops; i++) {
            if ((cops_location.at(i) - distance) > lower_limit) {
                /* if there is a gap in cop coverage range
                 * then gap will be safe for thief Devu */
                safe_house += (cops_location.at(i) - lower_limit - distance);
            }

            /* cop under consideration can't reach
             * house indicated by variable limit */
            lower_limit = cops_location.at(i) + distance + 1;

            /* if every house has been considered */
            if (lower_limit > 100) {break;}
        }

        if (lower_limit <= 100) {
            /* if some houses are safe at the end */
            safe_house += (100 - lower_limit + 1);
        }

        /* print count of safe houses */
        std::cout << safe_house << std::endl;
    }
    return 0;
}