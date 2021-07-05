#include <bits/stdc++.h>

int32_t findSqrt(int32_t N) {
    int32_t startIndex{0}, endIndex{N};
    int32_t square_root;int32_t midIndex;

    /* find integral-part of square_root */
    while (startIndex <= endIndex) {
        /* evaluate middleIndex */
        midIndex = startIndex + (endIndex - startIndex)/2;

        /* if N is a perfect_square */
        if (midIndex * midIndex == N) {
            return midIndex;
        } else if (midIndex * midIndex < N) {
            /* if integral_part lies in
             * right part of midIndex */
            startIndex = midIndex + 1;
            square_root = midIndex;
        } else {
            /* if integral_part lies in
             * left part of midIndex */
            endIndex = midIndex - 1;
        }
    }
    return square_root;
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while(test_case--) {

        /* get number */
        int32_t number;
        std::cin >> number;

        /* find out square_root_of_number */
        int32_t square_root {findSqrt(number)};


        /* print appropriate message */
        std::cout << square_root << std::endl;
    }
    return 0;
}