#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isValidIdentifier(string identifier) {
    //Check if the first character is an underscore or a letter
    if (identifier[0] == '_' || (identifier[0] >= 'A' && identifier[0] <= 'Z') || (identifier[0] >= 'a' && identifier[0] <= 'z')) {
        //Check the other characters
        for (int i = 1; i < identifier.length(); i++) {
            //Check if the character is a underscore or letter or a digit
            if (identifier[i] == '_' || (identifier[i] >= 'A' && identifier[i] <= 'Z') || (identifier[i] >= 'a' && identifier[i] <= 'z') || (identifier[i] >= 48 && identifier[i] <= 57)) {
                continue;
            } else {
                return false;
            }
        }
    } else {
        return false;
    }

    return true;
}

int main() {
    string inputLine;

    //Read input 
    while (getline(cin, inputLine)) {
        inputLine += " ";
        string identifier = "";
        string word = "";
        bool isIdentifier = false;

        //Process each character in the input line
        for (int i = 0; i < inputLine.length(); i++) {
            //If the current character is not a space, append it to the current word
            if (inputLine[i] != 32) {
                word += inputLine[i];
            } else {
                //Check if the current word is a valid identifier
                if (isValidIdentifier(word)) {
                    isIdentifier = true;
                } else {
                    //If the current word is not an identifier, reverse it
                    reverse(word.begin(), word.end());
                }

                //Output the current word and add a space
                cout << word << " ";

                //If the current word is an identifier, reset the identifier flag
                if (isIdentifier) {
                    isIdentifier = false;
                }

                //Reset the current word
                word = "";
            }
        }

        //Output a newline character
        cout << endl;
    }

    return 0;
}