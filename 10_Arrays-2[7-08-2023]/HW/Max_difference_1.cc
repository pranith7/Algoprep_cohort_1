#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int max = INT_MIN, min = INT_MAX;
  vector<int> arr(n); // Declaring the array with length n

  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++) {
    if (arr[i] > max)
      max = arr[i]; // Storing the maximum value of array in max variable
    if (arr[i] < min)
      min = arr[i]; // Storing the minimum value of array in min variable
  }

  cout << max - min; // Printing the maximum possible value of arr[i] - arr[j]

  return 0;
}