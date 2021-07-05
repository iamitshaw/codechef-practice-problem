#include <bits/stdc++.h>

void multiply(std::vector<int32_t>& digits, int32_t number) {
    int32_t temp, carry{0};

    /* multiply provided number with
     * each digit in factorial array */
    for(auto& digit: digits) {
        temp = number * digit + carry;

        /* extract temp's last digit */
        digit = temp % 10;

        /* eliminate temp's last digit */
        carry = temp / 10;
    }

    /* push digits left in carry */
    while (carry != 0) {
        /* extract carry's last digit */
        digits.push_back(carry % 10);

        /* eliminate carry's last digit */
        carry /= 10;
    }
}

template <typename T>
void factorial(T number) {
    /* store factorial's digit */
    std::vector<int32_t> digits{1};

    if (number > 0) {
        /* factorial value of number
         * greater than or equal to 1 */
        for(int32_t j{1}; j <= number; j++) {
            multiply(digits, j);
        }

        /* print factorial */
        for (auto it{digits.rbegin()};it != digits.rend();it++) {
            std::cout << *it;
        }

        /* traverse cursor to next line */
        std::cout << std::endl;
    } else if (number == 0){
        /* -----* value of 0! = 1 *------ */
        int32_t zero_factorial{1};
        std::cout << zero_factorial << std::endl;
    } else {
        /* factorial value isn't defined for negative numbers */
        std::cout << "factorial value isn't defined!" << std::endl;
    }
}

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while (test_case--) {
        /* get number */
        int32_t number;
        std::cin >> number;

        /* find out factorial */
        factorial(number);
    }
    return 0;
}