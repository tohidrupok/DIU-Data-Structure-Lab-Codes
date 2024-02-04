//code by the Tohid Rupok {25}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int sz, position;
    cin >> sz;
    int arr[sz];

    for (int i = 0; i < sz; i++)
        cin >> arr[i];

    cout << "Now your array is:  "<<endl;
    for (int i = 0; i < sz ; i++) {
        cout << arr[i] << " ";
    }

    cout <<endl << "position of deletion: "<<endl;
    cin >> position;

    if (position < 1 || position > sz) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = position - 1; i < sz - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Successfully deletion: "<<endl;
    for (int i = 0; i < sz - 1; i++) {
        cout << arr[i] << " ";
    }

}
