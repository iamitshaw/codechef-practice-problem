#include <bits/stdc++.h>

bool is_vowel(const char& c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
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
        /* get length_of_string */
        int32_t length_of_string;
        std::cin >> length_of_string;

        /* get string */
        std::string s;
        std::cin >> s;

        /* evaluate number_of_indices */
        int32_t number_of_indices{0}, i{1};
        while (i < length_of_string) {
            if (!is_vowel(s.at(i-1)) && is_vowel(s.at(i))) {
                number_of_indices += 1;
            }
            /* update index */ i += 1;
        }

        /* print appropriate message */
        std::cout << number_of_indices << std::endl;
    }
    return 0;
}