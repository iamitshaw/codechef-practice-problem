#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get array_size */
    int32_t array_size;
    std::cin >> array_size;

    /* declare a direct-access-table of
     * size stored in variable capacity */
    const int32_t capacity{1000000};
    auto* hash_array = new int32_t[capacity]{0};

    /* get array elements */
    int32_t number;
    for (int32_t i{0}; i < array_size; i++) {
        std::cin >> number;

        /* increase occurrence of number */
        hash_array[number]++;
    }

    /* sort array elements */
    for (size_t i{0}; i < capacity; i++) {
        if (hash_array[i] != 0) {
            /* if element i is present in hash_array */
            for (size_t j{1}; j <= hash_array[i]; j++) {
                /* print for each occurrence
                 * of element i in hash_array */
                std::cout << i << std::endl;
            }
        }
    }

    /* delete the heap memory */
    delete [] hash_array;

    return 0;
}