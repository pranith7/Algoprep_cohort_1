#include <iostream>
#include <cctype>
using namespace std;

void toggle(char *ch, int length) {
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

    char ch[st.length() + 1];
    strcpy(ch, st.c_str());

    toggle(ch, st.length());

    for (int i = 0; i < st.length(); i++) {
        cout << ch[i];
    }

    return 0;
}

