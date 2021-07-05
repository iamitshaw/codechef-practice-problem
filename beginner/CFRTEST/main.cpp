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
        /* get number_of_friends */
        int32_t number_of_friends;
        std::cin >> number_of_friends;

        /* get days */
        std::set<int32_t> days;int32_t day;
        for (int32_t i{0};i < number_of_friends;i++) {
            std::cin >> day;days.insert(day);
        }
        /* print appropriate message */
        std::cout << days.size() << std::endl;
    }
    return 0;
}