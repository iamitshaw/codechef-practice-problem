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
        /* get string_A */
        std::string string_A;
        std::cin >> string_A;

        /* get string_B */
        std::string string_B;
        std::cin >> string_B;

        /* evaluate characters which are
         * present in string_A & string_B */
        std::array<bool, 26> frequency_A{};
        std::array<bool, 26> frequency_B{};

        for (const auto& c: string_A) {
            frequency_A[c - 'a'] = {true};
        }

        for (const auto& c: string_B) {
            frequency_B[c - 'a'] = {true};
        }

        /* check whether palindrome is possible */
        bool is_possible{false};
        for (int32_t i{0};i < 26;i++) {
            if (frequency_A[i] && frequency_B[i]) {
                is_possible = {true};break;
            }
        }

        /* print appropriate message */
        std::cout << (is_possible? "Yes\n": "No\n");
    }
    return 0;
}