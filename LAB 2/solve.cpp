#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int max_sum_after_operations(int n, vector<int>& a) {
    int max_abs_sum = 0;
    int max_sum_with_negation = INT_MIN;
    int current_neg_sum = 0;

    for (int i = 0; i < n; ++i) {
        max_abs_sum += abs(a[i]);

        current_neg_sum = max(current_neg_sum + a[i], a[i]);
        max_sum_with_negation = max(max_sum_with_negation, current_neg_sum);
    }

    return max(max_abs_sum, max_sum_with_negation);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << max_sum_after_operations(n, a) << endl;
    }

    return 0;
}
