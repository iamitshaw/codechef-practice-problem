#include <iostream>

bool palindrome_checker(const std::string& message_string) {
    /* declare variable for left_index and right_index */
    auto left_index{message_string.begin()};
    auto right_index{message_string.end() - 1};

    /* check whether message_string is palindrome */
    while (left_index < right_index) {
        if (*left_index != *right_index) {
            /* if message_string
             * isn't palindrome */
            return false;
        } else {
            left_index++;
            right_index--;
        }
    }
    /* if message_string
     * is a palindrome */
    return true;
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get message_string */
        std::string message_string;
        std::cin >> message_string;

        /* print appropriate message */
        if (!palindrome_checker(message_string)) {
            std::cout << "loses" << std::endl;
        } else {
            std::cout << "wins" << std::endl;
        }
    }
    return 0;
}