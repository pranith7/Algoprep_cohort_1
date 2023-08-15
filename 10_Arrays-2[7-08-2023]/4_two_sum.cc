#include <iostream>
#include <vector>
using namespace std;

bool two_sum(const vector<int> &arr, int k) {
  /*
       The objective of this function is to find a pair if it exists
       or not such that the condition should be equal to k by adding any two
       values of an array.
 */
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == k) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int k;
  cin >> k;

  cout << (two_sum(arr, k) ? "true" : "false") << endl;

  return 0;
}
