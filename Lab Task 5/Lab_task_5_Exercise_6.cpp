#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Function to reverse a string statement word by word
string ReverseStatement(string statement) {
    stringstream ss(statement);
    string word, reversedStatement;
    while (ss >> word) {
        reversedStatement = word + " " + reversedStatement;
    }
    return reversedStatement;
}

int main() {
    ifstream inputFile("input.txt");
    string statement;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    getline(inputFile, statement);
    inputFile.close();

    cout << "Original statement: " << statement << endl;

    // Count vowels
    int vowelCount = 0;
    for (char c : statement) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // Count words
    int wordCount = 1;
    for (char c : statement) {
        if (c == ' ') {
            wordCount++;
        }
    }
    cout << "Number of words: " << wordCount << endl;

    // Reverse statement
    string reversedStatement = ReverseStatement(statement);
    cout << "Reversed statement: " << reversedStatement << endl;

    // Capitalize second letters
    bool capitalizeNext = false;
    for (char& c : statement) {
        if (capitalizeNext && isalpha(c)) {
            c = toupper(c);
            capitalizeNext = false;
        }
        if (c == ' ') {
            capitalizeNext = true;
        }
    }
    cout << "Statement with second letters capitalized: " << statement << endl;

    return 0;
}
