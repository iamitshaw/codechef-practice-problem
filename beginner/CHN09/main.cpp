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
        /* get color_string */
        std::string color_string;
        std::cin >> color_string;

        int32_t amber_balloons{0};
        int32_t brass_balloons{0};

        for (const auto& balloon_color: color_string) {
            if (balloon_color == 'a') {
                amber_balloons++;
            } else {
                brass_balloons++;
            }
        }

        /* print appropriate message */
        std::cout << std::min(amber_balloons,brass_balloons) << std::endl;
    }
    return 0;
}