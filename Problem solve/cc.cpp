#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> inputs(t);
    for (int i = 0; i < t; ++i) {
        cin >> inputs[i];
    }

    vector<string> outputs;
    for (const string& s : inputs) {
        string sortedString = s;
        sort(sortedString.begin(), sortedString.end());
        if (sortedString[0] == sortedString.back()) {
            outputs.push_back("NO");
        } else {
            outputs.push_back("YES");
            outputs.push_back(sortedString);
        }
    }

    for (const string& output : outputs) {
        cout << output << endl;
    }

    return 0;
}
