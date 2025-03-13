#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;
bool possible(int rows, int columns, const vector<pair<int, int>> q) {
    for (int i = 0;i < q.size();i++) {
        if (q[i].first == rows || q[i].second == columns || q[i].first == abs(q[i].second - columns) || q[i].second == abs(q[i].first - rows)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 2;
    vector<pair<int, int>> q(n);
    int count = 0;
    q.push_back({ 1,1 });
    if (possible(1, 2, q) == true) {
        cout << "tak";
    }
    else {
        cout << "nie";
    }
    return 0;
}