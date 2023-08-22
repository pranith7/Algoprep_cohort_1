#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int xorValue = 0;
    for(int i = 0; i < n; i++) {
        xorValue = xorValue ^ arr[i];
    }

    cout << xorValue << endl;

    delete[] arr;
    return 0;
}

