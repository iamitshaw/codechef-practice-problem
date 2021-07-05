#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get length */
    int32_t length;
    std::cin >> length;

    int32_t breadth;
    std::cin >> breadth;

    /* evaluate area_of_rectangle */
    int32_t area_of_rectangle{length * breadth};

    /* evaluate perimeter_of_rectangle */
    int32_t perimeter_of_rectangle{2 * (length + breadth)};

    /* print appropriate message */
    if (area_of_rectangle > perimeter_of_rectangle) {
        std::cout << "Area\n" << area_of_rectangle ;
    } else if (perimeter_of_rectangle > area_of_rectangle) {
        std::cout << "Peri\n" << perimeter_of_rectangle;
    } else {
        std::cout << "Eq\n" << area_of_rectangle;
    }
    return 0;
}