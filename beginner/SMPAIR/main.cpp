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
        /* get array_size */
        int32_t array_size;
        std::cin >> array_size;

        /* get array element */
        std::vector<std::pair<int32_t, int32_t>> array(array_size);

        int32_t array_element;
        for (int32_t i{0};i < array_size;i++) {
            /* get element */
            std::cin >> array_element;
            array.at(i) = {array_element, i};
        }

        std::pair<int32_t , int32_t> first_smallest{array.at(0)};
        std::pair<int32_t , int32_t> second_smallest{INT32_MAX, 0};

        /* evaluate first_smallest & second_smallest */
        for (int32_t i{1};i < array_size;i++) {
            if (array.at(i).first < first_smallest.first) {
                second_smallest = first_smallest;
                first_smallest = array.at(i);
            } else if (array.at(i).first == first_smallest.first
                      && array.at(i).second != first_smallest.second)  {
                second_smallest = array.at(i);
            } else if (array.at(i).first > first_smallest.first
                       && array.at(i).first < second_smallest.first) {
                second_smallest = array.at(i);
            }
        }

        /* print appropriate message */
        std::cout << (first_smallest.first + second_smallest.first) << std::endl;
    }
    return 0;
}