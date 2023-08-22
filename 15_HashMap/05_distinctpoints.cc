#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

long Max_Points(vector<int>& X, vector<int>& Y) {
    unordered_set<string> hs;

    for (int i = 0; i < X.size(); i++) {
        hs.insert(to_string(X[i]) + " " + to_string(Y[i]))64dd0709e4b043f4700f4460_original;
    }

    return hs.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    cout << Max_Points(x, y) << endl;

    return 0;
}
