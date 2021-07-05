#include <bits/stdc++.h>

int32_t match_stick_required(int32_t number) {
    std::unordered_map<int32_t, int32_t> match_stick_table{{0, 6}, {1, 2},
                                                 {2, 5}, {3, 5},
                                                 {4, 4}, {5, 5},
                                                 {6, 6}, {7, 3},
                                                 {8, 7}, {9, 6}};
    /* evaluate total_match_stick_required */
    int32_t total_match_stick{0};
    while (number != 0) {
        total_match_stick += match_stick_table[number % 10];

        /* eliminate processed digit */
        number /= 10;
    }
    return total_match_stick;
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
        /* get number_A */
        int32_t number_A;
        std::cin >> number_A;

        /* get number_B */
        int32_t number_B;
        std::cin >> number_B;

        int32_t number{number_A + number_B};

        /* evaluate required match-sticks */
        std::cout << match_stick_required(number) << "\n";
    }
    return 0;
}
