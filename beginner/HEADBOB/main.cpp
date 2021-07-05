#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_of_persons */
    int32_t number_of_persons;
    std::cin >> number_of_persons;

    while (number_of_persons--) {
        /* get number_of_gestures */
        int32_t number_of_gestures;
        std::cin >> number_of_gestures;

        /* get gesture_string */
        std::string gesture_string;
        std::cin >> gesture_string;

        bool is_determined{false};
        for (size_t i{0};i < number_of_gestures;i++) {
            if (gesture_string.at(i) != 'N') {
                if (gesture_string.at(i) == 'I') {
                    /* indian gesture is performed only by indians,
                     * hence it is determined that person is indian */
                    std::cout << "INDIAN" << std::endl;
                } else if (gesture_string.at(i) == 'Y') {
                    /* general gesture is performed only by foreigners,
                     * hence it is determined that person is non-indian */
                    std::cout << "NOT INDIAN" << std::endl;
                }

                /* since, it has been determined that person is indian or
                 * non-indian therefore no further processing is required */
                is_determined = true;
                break;
            }
        }

        if (!is_determined) {
            /* if it is impossible to determine */
            std::cout << "NOT SURE" << std::endl;
        }
    }
    return 0;
}