#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arrA[n], arrB[n];

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arrA[i] = x;
        arrB[i] = y;
    }

    for(int i = 0; i < n; i++) {
        if(arrA[i] < arrB[i])
            cout << arrA[i] << " " << arrB[i] << endl;
        else
            cout << arrB[i] << " " << arrA[i] << endl;
    }

    return 0;
}
