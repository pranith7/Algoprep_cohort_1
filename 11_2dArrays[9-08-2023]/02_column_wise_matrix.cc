#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  // Initializing 2d array with n(rows) and m(columns)
  vector<vector<int>> matrix(n, vector<int>(m));

  // Iterating over the rows
  for (int i = 0; i < n; i++) {
    // Iterating over the columns
    for (int j = 0; j < m; j++) {

      cin >> matrix[i][j];
    }
  }

  // Iterating over the columns
  for (int j = 0; j < m; j++) {

    // Iterating over the rows
    for (int i = 0; i < n; i++) {
      cout << matrix[i][j] << " ";
    }
    // Adding endl for display
    cout << endl;
  }
  return 0;
}