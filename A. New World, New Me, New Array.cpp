#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (k < n * (-p) || k > n * p) {
            cout << -1 << endl;
            continue;
        }

        int l = abs(k);
        int c = l / p;
        int r = l % p;

        if (r != 0) {
            c++;
        }

        if (c > n) {
            cout << -1 << endl;
        } else {
            cout << c << endl;
        }
    }

    return 0;
}

