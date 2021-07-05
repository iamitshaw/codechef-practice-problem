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
        std::vector<int32_t> array(size_of_array);
        for (int32_t i{0};i < size_of_array;i++) {
            std::cin >> array.at(i);
        }

        /* check whether array is rainbow_array or not */
        bool is_rainbow_array{true};int32_t rainbow_color{1};
        auto left{array.begin()}, right{array.end() -  1};

        while (left <= right && is_rainbow_array) {
            if (*left != *right) {
                is_rainbow_array = {false};break;
            } else {
                /* if left & right elements are equal */
                if (*left != rainbow_color) {
                    is_rainbow_array = {false};break;
                } else {
                    left++;right--;

                    /* process rainbow_color
                     * having same value */
                    while (left <= right) {
                        if (*left == *right) {
                            if (*left != rainbow_color) {
                                rainbow_color += 1;break;
                            } else {
                                /* advance left &
                                 * right iterators */
                                left++;right--;
                            }
                        } else {
                            is_rainbow_array = {false};break;
                        }
                    }
                }
            }
        }

        /* if rainbow_color doesn't equals 7 */
        if (rainbow_color != 7) {is_rainbow_array={false};}

        /* print appropriate message */
        std::cout << (is_rainbow_array? "yes\n": "no\n");
    }
    return 0;
}