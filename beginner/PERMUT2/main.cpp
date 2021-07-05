#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    do {
        /* get array_size */
        int32_t array_size;
        std::cin >> array_size;

        if (array_size > 0) {
            auto* array = new int32_t[array_size];

            /* get array elements */
            for (int32_t i{0};i < array_size;i++) {
                std::cin >> array[i];
            }

            /* check for ambiguous permutation */
            bool is_ambiguous{true};
            for (int32_t i{0};i < array_size;i++) {
                if (array[i] != (i+1)) {
                    if (array[array[i] - 1] != (i+1)) {
                        is_ambiguous = {false};
                        break;
                    }
                }
            }

            /* print appropriate message */
            std::cout << (is_ambiguous? "ambiguous\n": "not ambiguous\n");

            /* de-allocate heap-memory */
            delete [] array;
        } else {
            break;
        }
    } while(true);

    return 0;
}