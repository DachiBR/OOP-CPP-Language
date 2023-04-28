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
        int countIdentifiers = 0;

        //Count the number of valid identifiers in the line
        for (int i = 0; i < inputLine.length(); i++) {
            //If the current character is not a space append it to the current identifier
            if (inputLine[i] != 32) {
                identifier += inputLine[i];
            } else {
                //Check if the current identifier is a valid identifier and increment the count if it is
                if (isValidIdentifier(identifier)) {
                    countIdentifiers++;
                }
                //Reset the identifier
                identifier = "";
            }
        }
        //Output the count of valid identifiers in the line
        cout << countIdentifiers << endl;
    }

    return 0;
}


  
