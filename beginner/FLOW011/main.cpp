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
        /* get basic_salary */
        double basic_salary;
        std::cin >> basic_salary;

        /* evaluate dearness_allowance
         * and house_rent_allowance */
        double dearness_allowance;
        double house_rent_allowance;

        if (basic_salary < 1500) {
            /* if basic_salary is less than 1500 */
            dearness_allowance = basic_salary * 0.90;
            house_rent_allowance = basic_salary * 0.10;
        } else {
            /* if basic_salary is greater
             * than or equals to 1500 */
            dearness_allowance = basic_salary * 0.98;
            house_rent_allowance = 500.00;
        }

        /* evaluate gross salary */
        double gross_salary{basic_salary + dearness_allowance + house_rent_allowance};

        /* print gross salary */
        std::cout << std::fixed << std::setprecision(2);
        std::cout <<  gross_salary << std::endl;
    }
    return 0;
}