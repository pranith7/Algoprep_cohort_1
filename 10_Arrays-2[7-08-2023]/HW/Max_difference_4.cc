#include <bits/stdc++.h>
using namespace std;

int max_difference_2(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    arr[i] = arr[i] + i;
  }

  int max_val = INT_MIN;
  int min_val = INT_MAX;

  for (int num : arr) {
    if (num > max_val) {
      max_val = num;
    }

    if (num < min_val) {
      min_val = num;
    }
  }

  for (int i = 0; i < arr.size(); i++) {
    arr[i] = arr[i] - i;
  }

  return max_val - min_val;
}

int max_difference_3(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    arr[i] = arr[i] - i;
  }

  int max_val = INT_MIN;
  int min_val = INT_MAX;

  for (int num : arr) {
    if (num > max_val) {
      max_val = num;
    }

    if (num < min_val) {
      min_val = num;
    }
  }

  for (int i = 0; i < arr.size(); i++) {
    arr[i] = arr[i] + i;
  }

  return max_val - min_val;
}

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int max_val = INT_MIN;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (abs(arr[i] - arr[j]) + i - j > max_val) {
        max_val = abs(arr[i] - arr[j]) + i - j;
      }
    }
  }

  int ans1 = max_difference_2(arr);
  int ans2 = max_difference_3(arr);

  cout << max(max_val, max(ans1, ans2)) << endl;

  return 0;
}