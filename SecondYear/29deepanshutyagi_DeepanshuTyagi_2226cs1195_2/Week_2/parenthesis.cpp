#include <vector>
#include <string>

void generateParenthesis(int n, int open, int close, std::string current, std::vector<std::string> &result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    if (open < n) {
        generateParenthesis(n, open + 1, close, current + '(', result);
    }

    if (close < open) {
        generateParenthesis(n, open, close + 1, current + ')', result);
    }
}

std::vector<std::string> validParenthesis(int n) {
    std::vector<std::string> result;
    generateParenthesis(n, 0, 0, "", result);
    return result;
}
