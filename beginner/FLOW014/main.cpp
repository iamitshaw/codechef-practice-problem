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
        /* get hardness */
        double_t hardness;
        std::cin >> hardness;

        /* get carbon_content */
        double_t carbon_content;
        std::cin >> carbon_content;

        /* get tensile_strength */
        double_t tensile_strength;
        std::cin >> tensile_strength;

        size_t grade_of_steel;

        /* evaluate three conditions */
        bool condition_hardness{hardness > 50}; // condition - i
        bool condition_carbon_content{carbon_content < 0.7};  // condition - ii
        bool condition_tensile_strength{tensile_strength > 5600}; // condition - iii

        if (condition_hardness && condition_carbon_content && condition_tensile_strength) {
            /* if conditions - i, ii & iii
             * are met then grade is 10 */
            grade_of_steel = 10;
        } else if (condition_hardness && condition_carbon_content) {
            /* if conditions - i & ii
             * are met then grade to 9*/
            grade_of_steel = 9;
        } else if (condition_carbon_content && condition_tensile_strength) {
            /* if conditions - ii & iii
             * are met then grade to 8 */
            grade_of_steel = 8;
        } else if (condition_hardness && condition_tensile_strength) {
            /* if conditions - i & iii
             * are met then grade to 7 */
            grade_of_steel = 7;
        } else if (condition_hardness or condition_carbon_content or condition_tensile_strength) {
            /* if only one condition is
             * met then set grade to 6 */
            grade_of_steel = 6;
        } else {
            /* if none of three conditions
             * are met then set grade to 5 */
            grade_of_steel = 5;
        }

        /* print grade of steel */
        std::cout << grade_of_steel << std::endl;
    }
    return 0;
}