#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void reversePart(vector<int> &arr, int s, int e) {
  int sp = s;
  int ep = e;
  while (sp < ep) {
    swap(arr[sp], arr[ep]);
    sp++;
    ep--;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int s, e;
  cin >> s >> e;
  reversePart(arr, s, e);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
