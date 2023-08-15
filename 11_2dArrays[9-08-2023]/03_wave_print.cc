#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  // Initializing 2d array with n(rows) and m(columns)
  vector<vector<int>> matrix(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    /*
        checking if the current row is divisible by 2
        if it is then iterating from 0 to m.
    */
    if (i % 2 == 0) {
      for (int j = 0; j < m; j++) {
        cout << matrix[i][j] << " ";
      }
    }
    /*
        if it not then iterating from m to 0.
    */
    else {
      for (int j = m - 1; j >= 0; j--) {
        cout << matrix[i][j] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}