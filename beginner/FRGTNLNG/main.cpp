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
        /* get forgotten_words_count */
        int32_t forgotten_words_count;
        std::cin >> forgotten_words_count;

        /* get modern_phrases_count */
        int32_t modern_phrases_count;
        std::cin >> modern_phrases_count;

        /* get forgotten_words */
        std::vector<std::string> forgotten_words(forgotten_words_count);
        for (int32_t i{0}; i < forgotten_words_count; i++) {
            std::cin >> forgotten_words.at(i);
        }

        std::set<std::string> modern_phrase_words;

        while (modern_phrases_count--) {
            /* get words_in_each_phrase */
            int32_t words_in_each_phrase;
            std::cin >> words_in_each_phrase;

            /* get modern_phrase_words */std::string word;
            for (int32_t i{0}; i < words_in_each_phrase; i++) {
                std::cin >> word;modern_phrase_words.insert(word);
            }
        }

        for (const auto& word: forgotten_words) {
            if (modern_phrase_words.find(word) != modern_phrase_words.end()) {
                /* if word is used in
                 * modern phrase words */
                std::cout << "YES ";
            } else {
                /* if word isn't used in
                 * modern phrase words */
                std::cout << "NO ";
            }
        }

        /* move cursor to next-line */
        std::cout << "\n";
    }
    return 0;
}