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

        /* evaluate total_sub_arrays */
        int32_t total_sub_arrays{0};
        for (int32_t i{0};i < size_of_array;i++) {

            /* initial_value of sum & product */
            int32_t sum{array.at(i)}, product{array.at(i)};
            total_sub_arrays += 1;

            for (int32_t j{i+1};j < size_of_array;j++) {
                sum += array.at(j);product *= array.at(j);

                /* if sum_of_sub_array equals product_of_sub_array */
                if (sum == product) {
                    total_sub_arrays += 1;
                }
            }
        }

        /* print appropriate message */
        std::cout << total_sub_arrays << std::endl;
    }
    return 0;
}