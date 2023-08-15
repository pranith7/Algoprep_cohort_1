#include <cstring>
#include <iostream>
using namespace std;

void reverse(char *ch, int length) {

  // Intitialising two pointers with initial and end values of str length
  int sp = 0;
  int ep = length - 1;

  // Traversing over the string using 2 pointers
  while (sp < ep) {
    char temp = ch[sp];
    ch[sp] = ch[ep];
    ch[ep] = temp;
    sp++;
    ep--;
  }
}

int main() {
  string st;
  getline(cin, st);

  char ch[st.length() + 1];

  // copying st value to ch
  strcpy(ch, st.c_str());

  // Passing ch string to the reverse function with length parameter
  reverse(ch, st.length());

  // printing the modified value of ch
  for (int i = 0; i < st.length(); i++) {
    cout << ch[i];
  }

  return 0;
}
