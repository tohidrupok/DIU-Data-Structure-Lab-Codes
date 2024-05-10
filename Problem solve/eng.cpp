#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    string inputs[t];

    for (int i = 0; i < t; ++i) {
        cin >> inputs[i];

        sort(inputs[i].begin(), inputs[i].end());

        if (inputs[i][0] == inputs[i].back()) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << inputs[i] << endl;
        }
    }

    return 0;
}
