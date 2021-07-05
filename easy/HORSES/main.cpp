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
        /* get number_of_horses */
        int32_t number_of_horses;
        std::cin >> number_of_horses;

        /* get skill-level of horses */
        std::vector<int64_t> skill_level(number_of_horses);
        for (int32_t i{0};i < number_of_horses;i++) {
            std::cin >> skill_level.at(i);
        }

        /* sort skill-level of horses */
        std::sort(skill_level.begin(), skill_level.end());

        /* determine minimum skill difference between horses */
        int64_t minimum_difference{INT64_MAX};
        for (int32_t i{1};i < number_of_horses;i++) {
            int64_t temp_difference{skill_level[i]-skill_level[i-1]};
            if (temp_difference < minimum_difference) {
                minimum_difference = temp_difference;
            }
        }

        /* print appropriate message */
        std::cout << minimum_difference << std::endl;
    }
    return 0;
}