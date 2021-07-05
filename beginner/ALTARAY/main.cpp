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
        /* get size_of_array */
        int32_t size_of_array;
        std::cin >> size_of_array;

        /* get array_elements */
        std::vector<std::pair<int64_t, int32_t>> array(size_of_array);
        for (int32_t i{0};i < size_of_array;i++) {
            std::cin >> array.at(i).first;
        }

        /* evaluate longest_alternating_sub_array */
        array.at(size_of_array-1).second = 1;
        for (auto it{array.rbegin()+1};it != array.rend();it++) {
            if ((it->first * (it-1)->first) < 0) {
                it->second = (it-1)->second + 1;
            } else {
                it->second = 1;
            }
        }

        /* print appropriate message */
        for (const auto& item: array) {
            std::cout << item.second << " ";
        }

        /* move cursor to next-line */
        std::cout << std::endl;
    }
    return 0;
}