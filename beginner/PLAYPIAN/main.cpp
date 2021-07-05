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
        /* get log_information */
        std::string s;
        std::cin >> s;

        /* determine validity
         * of log_information */
        bool is_valid_log{true};
        for (auto it{s.begin()};it != s.end();it += 2) {
            if (*it == *(it+1)) {
                is_valid_log = {false};break;
            }
        }

        /* print appropriate message */
        std::cout << (is_valid_log? "yes\n": "no\n");
    }
    return 0;
}