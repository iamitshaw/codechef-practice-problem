#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::array<bool, 26> known_letter{};

    /* get known-letters */
    std::string string;
    std::cin >> string;

    for (const auto& letter: string) {
        known_letter[letter - 'a'] = {true};
    }

    /* get number_of_words */
    int32_t number_of_words;
    std::cin >> number_of_words;

    while (number_of_words--) {
        /* get word */
        std::string word;
        std::cin >> word;

        /* evaluate can_be_read */
        bool can_be_read{true};
        for (const auto& letter: word) {
            if (!known_letter[letter - 'a']) {
                /* if unknown letter appears in word */
                can_be_read = {false};break;
            }
        }
        /* print appropriate message */
        std::cout << (can_be_read? "Yes\n": "No\n");
    }
    return 0;
}