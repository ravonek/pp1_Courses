#include <iostream> 
#include <string> 
 
using namespace std; 
 
int main() { 
    string expression; 
    cin >> expression; 
 
    string triplets[] = {"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"}; 
 
    int plusPos = expression.find('+'); 
    string left = expression.substr(0, plusPos); 
    string right = expression.substr(plusPos + 1); 
 
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
 
    int totalSum = num1 + num2; 
 
    string result; 
    if (totalSum == 0) { 
        result = "ZER"; 
    } else { 
        while (totalSum > 0) { 
            result = triplets[totalSum % 10] + result; 
            totalSum /= 10; 
        } 
    } 
 
    cout << result << endl; 
 
    return 0; 
}