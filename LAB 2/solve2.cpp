//code by the Tohid Rupok {25}
#include<bits/stdc++.h>
using namespace std;

int min_moves_to_divisible_by_3(vector<int>& arr) {
    int total_sum = 0;
    for (int num : arr) {
        total_sum += num;
    }
    int remainder = total_sum % 3;

    if (remainder == 0) {
        return 0;
    } else if (remainder == 1) {
        int count_1_mod_3 = 0;
        for (int num : arr) {
            if (num % 3 == 1) {
                count_1_mod_3++;
            }
        }
        return count_1_mod_3 >= 1 && arr.size() > 1 ? 1 : -1;
    } else if (remainder == 2) {
        int count_2_mod_3 = 0;
        for (int num : arr) {
            if (num % 3 == 2) {
                count_2_mod_3++;
            }
        }
        return count_2_mod_3 >= 1 && arr.size() > 1 ? 1 : -1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << min_moves_to_divisible_by_3(arr) << endl;
    }
    return 0;
}
