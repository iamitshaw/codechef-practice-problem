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
        /* get number_of_floors */
        double_t number_of_floors;
        std::cin >> number_of_floors;

        /* get velocity_of_chef */
        double_t velocity_of_chef;
        std::cin >> velocity_of_chef;

        /* get velocity_of_elevator */
        double_t velocity_of_elevator;
        std::cin >> velocity_of_elevator;

        /* evaluate time_by_elevator & time_by_stair_case */
        double_t time_by_elevator{(2*number_of_floors)/velocity_of_elevator};
        double_t time_by_stair_case{(std::sqrt(2)*number_of_floors)/velocity_of_chef};

        /* print appropriate message */
        if (time_by_elevator < time_by_stair_case) {
            std::cout << "Elevator\n";
        } else {
            std::cout << "Stairs\n";
        }
    }
    return 0;
}