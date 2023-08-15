#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

bool is_pallindrome(char *ch, int length) {

  // Initializing two pointers with initial and end values of str length
  int sp = 0;
  int ep = length - 1;

  // Traversing over the string using 2 pointers
  while (sp < ep) {
    // Convert characters to lowercase before comparison
    if (tolower(ch[sp]) != tolower(ch[ep])) {
      return false; // If characters don't match, it's not a palindrome
    }
    sp++;
    ep--;
  }

  return true;
  // If the loop completes, it's a palindrome
}

int main() {
  string st;
  getline(cin, st);

  char ch[st.length() + 1];

  // Copying st value to ch
  strcpy(ch, st.c_str());

  // Passing ch string to the is_pallindrome function with length parameter
  if (is_pallindrome(ch, st.length())) {
    cout << "true";
  } else {
    cout << "false";
  }

  return 0;
}
