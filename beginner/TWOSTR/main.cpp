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
        /* get first_string */
        std::string first_string;
        std::cin >> first_string;

        /* get second_string */
        std::string second_string;
        std::cin >> second_string;

        bool can_matched{true};
        for (int32_t i{0};first_string[i] != '\0';i++) {
            if (first_string[i] != '?' && second_string[i] != '?') {
                if (first_string[i] != second_string[i]) {
                    can_matched = {false};
                    break;
                }
            }
        }

        /* print appropriate message */
        std::cout << (can_matched? "Yes": "No") << std::endl;
    }
    return 0;
}