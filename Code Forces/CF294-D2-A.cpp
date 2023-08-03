#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, no_shots;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    cin >> no_shots;
    while (no_shots--) {
        int x, y;
        cin >> x >> y;
        --x;
        if (x != 0)
            v[x - 1] += (y - 1);
        if (x != n - 1)
            v[x + 1] += (v[x] - y);
        v[x] = 0;
    }
    for (const x : v)
        cout << x << endl;
}
