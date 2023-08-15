#include <bits/stdc++.h>
using namespace std;

int countgreater(vector<int> &arr) {
  /*
      The Objective of this function is to print the number of
      occurences of the maximum element present in the array.
  */
  int max = INT_MIN;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] > max)
      max = arr[i]; // Finding the max element
  }
  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == max)
      count++; // Increasing the counter variable if occurence is found.
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << countgreater(arr);
  return 0;
}