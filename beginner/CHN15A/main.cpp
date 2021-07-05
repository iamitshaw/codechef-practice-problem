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
        /* get N */
        int32_t N;
        std::cin >> N;

        /* get K */
        int32_t K;
        std::cin >> K;

        int32_t wolverine_like_minion{0};

        /* get minions_characteristics_value */
        int32_t minions_characteristics_value;
        for (int32_t i{0};i < N;i++) {
            std::cin >> minions_characteristics_value;
            if ((minions_characteristics_value+K)%7 == 0) {
                wolverine_like_minion += 1;
            }
        }

        /*print wolverine_like_minion */
        std::cout << wolverine_like_minion << std::endl;
    }
    return 0;
}