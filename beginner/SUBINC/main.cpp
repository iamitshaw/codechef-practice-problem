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

        /* get array elements */
        std::vector<int32_t> array(size_of_array);
        for (int32_t i{0};i < size_of_array;i++) {
            std::cin >> array.at(i);
        }

        /* evaluate total_sub_arrays */
        int64_t i{1}, total_sub_array{size_of_array};
        while (i < size_of_array) {
            /* maximum length of subarray which
             * satisfy specified condition */
            int64_t length{0};
            while (i < size_of_array && array[i-1] <= array[i]) {
                length += 1;i += 1;
            }

            /* update possible sub-array */
            total_sub_array += (length*(length + 1)) / 2;

            /* update index */ i += 1;
        }

        /* print appropriate message */
        std::cout << total_sub_array << std::endl;
    }
    return 0;
}