 /*Construct a C++ program that removes a specific character from a given string and return the updated string.*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    char charToRemove;
cout<< "Enter a string: ";//  user input
getline(cin, input);
cout<< "Enter the character to remove: ";
cin>>charToRemove;
  string updatedString = "";
 for (int i = 0; i<input.length(); i++) {                          // Removing the specified character
        if (input[i] != charToRemove) {
updatedString += input[i];
        }
    }
cout<< "Updated string: " <<updatedString<<endl;
 return 0;
}
