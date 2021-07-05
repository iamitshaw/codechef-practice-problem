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
        /* get number_of_source_files */
        int32_t number_of_source_files;
        std::cin >> number_of_source_files;

        /* get number_of_ignored_files */
        int32_t number_of_ignored_files;
        std::cin >> number_of_ignored_files;

        /* get number_of_tracked_files  */
        int32_t number_of_tracked_files;
        std::cin >> number_of_tracked_files;

        std::vector<std::pair<bool, bool>> file_info(number_of_source_files);

        /* get ignored_source_files */
        int32_t ignored_file;
        for (int32_t i{0};i < number_of_ignored_files;i++) {
            std::cin >> ignored_file;
            file_info[ignored_file-1].first = {true};
        }

        /* get tracked_source_files */
        int32_t tracked_file;
        for (int32_t i{0};i < number_of_tracked_files;i++) {
            std::cin >> tracked_file;
            file_info[tracked_file-1].second = {true};
        }

        /* get ignored_and_tracked_files
         * & unignored_and_untracked */
        int32_t ignored_tracked_files{0}, unignored_untracked_files{0};
        for (const auto& item: file_info) {
            if (item.first && item.second) {
                /* if i-th file is ignored & tracked */
                ignored_tracked_files += 1;
            } else if (!item.first && !item.second) {
                /* if i-th file is unignored & untracked */
                unignored_untracked_files += 1;
            }
        }

        /* print appropriate message */
        std::cout << ignored_tracked_files << " ";
        std::cout << unignored_untracked_files << "\n";
    }
    return 0;
}