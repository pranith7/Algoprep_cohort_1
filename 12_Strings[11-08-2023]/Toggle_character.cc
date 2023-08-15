#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

void toggle(char *ch, int length) {
  /*
      Function of this task is to modifiy the characters in the string
      if character is uppercase convert it to lowercase and viceversa.
  */
  for (int i = 0; i < length; i++) {
    if (isupper(ch[i])) {
      ch[i] = tolower(ch[i]);
    } else {
      ch[i] = toupper(ch[i]);
    }
  }
}

int main() {

  string st;
  getline(cin, st);

  // copying st value to ch
  char ch[st.length() + 1];
  strcpy(ch, st.c_str());

  // Passing ch string to the toggle function with length parameter
  toggle(ch, st.length());

  // printing the modified value of ch
  for (int i = 0; i < st.length(); i++) {
    cout << ch[i];
  }

  return 0;
}
