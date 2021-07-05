#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get first_number */
    int32_t A;
    std::cin >> A;

    /* get second_number */
    int32_t B;
    std::cin >> B;

    int32_t result{A - B};

    /* obtain wrong last_digit */
    int32_t last_digit{result%10};

    /* change last_digit */
    if (last_digit == 9) {
        last_digit = (last_digit+2)%10;
    } else {
        last_digit = (last_digit+1)%10;
    }


    /* update result with wrong last_digit */
    result = (result/10)*10 + last_digit;

    /* print appropriate message */
    std::cout << result << std::endl;
    return 0;
}