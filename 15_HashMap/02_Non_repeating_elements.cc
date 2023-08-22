#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstNonRepeating(const vector<int>& arr) {
    unordered_map<int, int> hm;
    for (int num : arr) {
        if (hm.count(num) == 1) {
            int temp = hm[num];
            hm[num] = temp + 1;
        } else {
            hm[num] = 1;
        }
    }
    for (int num : arr) {
        if (hm[num] == 1) {
            return num;
        }
    }
    return -1; // If no non-repeating element is found
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << firstNonRepeating(arr) << endl; // Output: 3
    return 0;
}

