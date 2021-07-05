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
        /* get character_string */
        std::string string;
        std::cin >> string;

        /* create frequency_table */
        std::array<int32_t, 26> frequency_table{};
        int32_t string_length{0};

        for (const auto& character: string) {
            frequency_table[character - 'a'] += 1;string_length += 1;
        }

        if (string_length % 2 == 0) {
            /* if string_length is even */
            bool has_occurred_half_time{false};
            for (const auto& frequency: frequency_table) {
                if (frequency == (string_length/2)) {
                    has_occurred_half_time = {true};
                    break;
                }
            }

            /* print appropriate message */
            std::cout << (has_occurred_half_time? "YES\n": "NO\n");
        } else {
            /* if string_length is odd */
            std::cout << "NO\n";
        }
    }
    return 0;
}