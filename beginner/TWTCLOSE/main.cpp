#include <bits/stdc++.h>

int32_t main(int32_t argc, char* argv[]) {
    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    /* get number_of_tweets */
    int32_t number_of_tweets;
    std::cin >> number_of_tweets;

    /* get number_of_clicks */
    int32_t number_of_clicks;
    std::cin >> number_of_clicks;

    int32_t count_of_open_tweets{0};
    auto* direct_access_table = new bool[number_of_tweets];

    /* initialize direct_access_table which
     * indicates corresponding tweets status */
    for (int32_t i{0};i < number_of_tweets;i++) {
        direct_access_table[i] = {false};
    }

    while(number_of_clicks--) {
        /* get operation_performed */
        std::string operation_performed;
        std::cin >> operation_performed;

        if (operation_performed == "CLICK") {
            /* get tweet_number */
            int32_t tweet_number;
            std::cin >> tweet_number;

            if (direct_access_table[tweet_number - 1]) {
                /* if tweet_number is already opened */
                count_of_open_tweets -= 1;
                direct_access_table[tweet_number - 1] = {false};
            } else {
                /* if tweet_number is closed */
                count_of_open_tweets += 1;
                direct_access_table[tweet_number - 1] = {true};
            }
        } else {
            if (count_of_open_tweets != 0) {
                /* initialize direct_access_table which
                 * indicates corresponding tweets status */
                for (size_t j{0}; j < number_of_tweets; j++) {
                    direct_access_table[j] = false;
                }
                /* set count_of_open_tweets equals zero */
                count_of_open_tweets = 0;
            }
        }

        /* print count_of_open_tweets */
        std::cout << count_of_open_tweets << std::endl;
    }

    /* de-allocate heap memory */
    delete [] direct_access_table;

    return 0;
}