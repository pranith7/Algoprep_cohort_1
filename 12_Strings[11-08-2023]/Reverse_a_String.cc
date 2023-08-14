#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *ch, int length) {
    int sp = 0;
    int ep = length - 1;

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
    strcpy(ch, st.c_str());

    reverse(ch, st.length());

    for (int i = 0; i < st.length(); i++) {
        cout << ch[i];
    }

    return 0;
}

