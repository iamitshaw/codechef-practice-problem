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
        /* get expression */
        std::string expression;
        std::cin >> expression;

        /* parenthesis stack */
        std::stack<char> bracket_stack;

        /* operator stack */
        std::stack<char> operator_stack;

        /* store reverse-polish-notation */
        std::vector<char> RPN;

        for (auto& character:expression) {
            /* pop operations */
            if (character == ')') {
                /* remove character '('
                 * from top of stack */
                bracket_stack.pop();

                /* push operator present on top of
                 * operator_stack onto RPN notation */
                RPN.push_back(operator_stack.top());

                /* remove operator from top of stack */
                operator_stack.pop();
            } else {
                /* push operations */
                if (character == '(') {
                    /* push parenthesis on bracket_stack */
                    bracket_stack.push(character);
                } else if (islower(character)) {
                    /* push operand present in expression
                     * onto RPN notation of expression */
                    RPN.push_back(character);
                } else {
                    /* push operator on operator_stack */
                    operator_stack.push(character);
                }
            }
        }

        /* display reverse-polish-notation */
        for (const auto& character: RPN) {
            std::cout << character;
        }
        /* move cursor to next-line */
        std::cout << std::endl;
    }
    return 0;
}