#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    std::array<int32_t, 6> notes_value{100,
                                       50,
                                       10,
                                       5,
                                       2,
                                       1};
    while (test_case--) {
        /* get total_amount */
        int32_t total_amount;
        std::cin >> total_amount;

        int32_t total_note_count{0};
        for (const auto& note_value: notes_value) {
            total_note_count += (total_amount / note_value);

            /* update total_amount */
            total_amount %= note_value;

            /* if total_amount equals 0 then no
             * further processing is required */
            if (total_amount == 0) {
                break;
            }
        }

        /* print appropriate message */
        std::cout << total_note_count << std::endl;
    }
    return 0;
}