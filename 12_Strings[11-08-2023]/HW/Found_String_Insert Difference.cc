#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  string AsciiString = "";

  for (long unsigned int i = 0; i < str.length() - 1; i++) {
    AsciiString += str[i]; // Append the current character

    int asciiDiff = str[i + 1] - str[i]; // Calculate the ASCII difference
    AsciiString +=
        to_string(asciiDiff); // Append the ASCII difference as a string
  }

  // Add the last character of the input string
  AsciiString += str[str.length() - 1];

  cout << AsciiString << endl;

  return 0;
}