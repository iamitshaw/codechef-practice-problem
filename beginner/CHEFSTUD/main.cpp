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
        /* get sitting_arrangement */
        std::string s;
        std::cin >> s;

        /* evaluate total_punishable_pairs */
        int32_t pairs_to_be_punished{0};
        for (auto it{s.begin()};it != (s.end()-1);it++) {
            if (*it == '<' && *(it + 1) == '>') {
                pairs_to_be_punished += 1;it++;
            }
        }

        /* print appropriate message */
        std::cout << pairs_to_be_punished << std::endl;
    }
    return 0;
}