#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void FrequencyQueries(vector<int>& arr, vector<int>& queries) {
    unordered_map<int, int> hm;

    for (int num : arr) {
        if (hm.find(num) != hm.end()) {
            int temp = hm[num];
            hm[num] = temp + 1;
        } else {
            hm[num] = 1;
        }
    }

    for (int num : queries) {
        if (hm.find(num) != hm.end()) {
            cout << hm[num] << "\n";
        } else {
            cout << "0\n";
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }

    FrequencyQueries(arr, queries);

    return 0;
}

