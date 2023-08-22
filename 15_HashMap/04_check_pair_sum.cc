#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool PairSum(vector<int>& arr, int k) {
    unordered_map<int, int> map;
    for (int num : arr) {
        if (map.count(num) == 1) {
            map[num]++;
        } else {
            map[num] = 1;
        }
    }

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int b = k - a;

        if ((a != b) && (map.count(b) == 1)) {
            return true;
        } else if ((a == b) && (map[b] > 1)) {
            return true;
        }
    }

    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (PairSum(arr, k)) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}


