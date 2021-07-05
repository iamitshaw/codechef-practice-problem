#include <bits/stdc++.h>

void display_job(std::vector<int32_t>& vector) {
    for (const auto& item: vector) {
        std::cout << item << " ";
    }
    /* move cursor to next-line */
    std::cout << "\n";
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
        /* get number_of_jobs */
        int32_t number_of_jobs;
        std::cin >> number_of_jobs;

        /* get number_of_jobs that
         * has been completed */
        int32_t number_of_completed_jobs;
        std::cin >> number_of_completed_jobs;

        /* get completed_jobs */
        std::priority_queue<int32_t> priorityQueue;
        int32_t job_index;
        for (int32_t i{0}; i < number_of_completed_jobs; i++) {
            std::cin >> job_index;
            /* using minimum_priority_queue */
            priorityQueue.push(-job_index);
        }

        /* 0: chef's turn & 1: assistant's turn */
        int32_t turn{0};

        std::vector<int32_t> chef_job;
        std::vector<int32_t> assistant_job;

        for (int32_t i{1}; i <= number_of_jobs; i++) {
            if (priorityQueue.empty() || -priorityQueue.top() != i) {
                /* if i-th job hasn't been finished */
                if (turn == 0) {
                    chef_job.push_back(i);
                } else {
                    assistant_job.push_back(i);
                }
                /* change turn */
                turn = 1 - turn;
            } else {
                /* if i-th job has been finished */
                priorityQueue.pop();
            }
        }

        /* print jobs-finished by chef */
        display_job(chef_job);

        /* print jobs-finished by assistant */
        display_job(assistant_job);
    }
    return 0;
}