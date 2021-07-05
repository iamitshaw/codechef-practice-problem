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
        /* get number_of_row */
        int32_t row_count;
        std::cin >> row_count;

        /* get input_elements */
        std::vector<std::vector<int32_t>> array(row_count);

        int32_t element;
        for (int32_t i{0};i < row_count;i++) {
            for (int32_t j{0};j <= i;j++) {
                std::cin >> element;
                array.at(i).push_back(element);
            }
        }

        for (int32_t i{0};i < row_count - 1;i++) {
            /* left-most column elements */
            array.at(i+1).at(0) += array.at(i).at(0);

            /* main-diagonal elements */
            array.at(i+1).at(i+1) += array.at(i).at(i);

            for (int32_t j{1};j <= i;j++) {
                int32_t maximum{std::max(array.at(i).at(j), array.at(i).at(j-1))};
                array.at(i+1).at(j) += maximum;
            }
        }

        /* find out largest_sum_path */
        auto largest_sum_path{std::max_element(array.at(row_count-1).begin(),
                                               array.at(row_count-1).end())};

        /* print appropriate message */
        std::cout << *largest_sum_path << std::endl;
    }
    return 0;
}