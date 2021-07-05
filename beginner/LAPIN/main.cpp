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
        /* get string */
        std::string s;
        std::cin >> s;

        /* start & end character */
        auto start_index{s.begin()};
        auto end_index{s.end() - 1};

        std::array<int32_t, 26> left_frequency{0};
        std::array<int32_t, 26> right_frequency{0};

        /* evaluate frequency of left & right half */
        while (start_index <= end_index) {
            left_frequency[*start_index - 'a'] += 1;
            right_frequency[*end_index - 'a'] += 1;
            start_index++;end_index--;
        }

        bool is_lapindrome{true};
        for (int32_t i{0};i < 26;i++) {
            if (left_frequency[i] != right_frequency[i]) {
                is_lapindrome = {false};break;
            }
        }

        /* print appropriate message */
        std::cout << (is_lapindrome?"YES":"NO") << std::endl;
    }
    return 0;
}