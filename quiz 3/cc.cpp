#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// Function to check if a word is a palindrome
bool isPalindrome(const string& word) {
    int len = word.length();
    for (int i = 0; i < len / 2; ++i) {
        if (word[i] != word[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string line;
    getline(cin, line); // Read the entire line of input

    stringstream ss(line); // Create a stringstream to parse the line
    unordered_map<string, int> freq;
    set<string> uniqueWords;
    string word;

    // Process each word from the line
    while (ss >> word) {
        // If the word is not a palindrome and it is not a duplicate
        if (!isPalindrome(word)) {
            freq[word]++;
            uniqueWords.insert(word);
        }
    }

    // Store words in a vector and sort them in ascending order
    vector<string> result(uniqueWords.begin(), uniqueWords.end());
    sort(result.begin(), result.end());

    // Output the result words in ascending order
    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}
