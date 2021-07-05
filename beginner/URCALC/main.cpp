#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get A */
    double_t A;
    std::cin >> A;

    /* get B */
    double_t B;
    std::cin >> B;

    /* get operator */
    char operatorValue;
    std::cin >> operatorValue;

    double_t result{0};
    switch (operatorValue) {
        case '+':
            result = A + B;break;
        case '-':
            result = A - B;break;
        case '*':
            result = A * B;break;
        case '/':
            result = A / B;break;
        default:
            std::cout << "not defined!\n";
            break;
    }

    /* print appropriate message */
    std::cout << std::fixed << result << std::endl;

    return 0;
}