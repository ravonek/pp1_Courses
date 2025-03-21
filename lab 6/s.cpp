#include <iostream>
#include <string>

using namespace std;

void processExpression(string expression) {
    string triplets[] = {"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};
    
    int opPos = expression.find_first_of("+-*");
    char operation = expression[opPos];

    string left = expression.substr(0, opPos);
    string right = expression.substr(opPos + 1);

    int num1 = 0, num2 = 0;
    for (int i = 0; i < left.size(); i += 3) {
        for (int j = 0; j < 10; ++j) {
            if (left.substr(i, 3) == triplets[j]) {
                num1 = num1 * 10 + j;
                break;
            }
        }
    }
    for (int i = 0; i < right.size(); i += 3) {
        for (int j = 0; j < 10; ++j) {
            if (right.substr(i, 3) == triplets[j]) {
                num2 = num2 * 10 + j;
                break;
            }
        }
    }

    int resultNum = 0;
    if (operation == '+') resultNum = num1 + num2;
    else if (operation == '-') resultNum = num1 - num2;
    else if (operation == '*') resultNum = num1 * num2;

    string result;
    if (resultNum == 0) {
        result = "ZER";
    } else {
        while (resultNum > 0) {
            result = triplets[resultNum % 10] + result;
            resultNum /= 10;
        }
    }

    cout << result << endl;
}

int main() {
    string expression;
    cin >> expression;

    processExpression(expression);

    return 0;
}
