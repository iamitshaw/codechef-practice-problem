#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get test_case */
    int32_t test_case;
    std::cin >> test_case;

    while(test_case--) {
        /* get number_of_students */
        int32_t number_of_students;
        std::cin >> number_of_students;

        /* get moment_of_time */
        std::vector<int32_t> A(number_of_students);
        for (int32_t i{0};i < number_of_students;i++) {
            std::cin >> A.at(i);
        }

        /* get required_time_to_finish cooking */
        std::vector<int32_t> B(number_of_students);
        for (int32_t i{0};i < number_of_students;i++) {
            std::cin >> B.at(i);
        }

        /* evaluate count_of_students who
         * will be able_to_finish_cooking */
        int32_t able_to_finish_cooking{(A[0] >= B[0])? 1: 0};
        for (int32_t i{1};i < number_of_students;i++) {
            /* if available_time is greater then required_time */
            if ((A[i] - A[i-1]) >= B[i]) {
                able_to_finish_cooking += 1;
            }
        }

        /* print appropriate message */
        std::cout << able_to_finish_cooking << std::endl;
    }
    return 0;
}