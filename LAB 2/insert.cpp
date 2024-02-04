#include<bits/stdc++.h>
using namespace std;

int main() {
    int size, element, position;
    cin >> size;

    int arr[size + 1];
    for (int i = 0; i < size; i++)
        cin >> arr[i];


    cout << "position : ";
    cin >> position;

    cout << "element : ";
    cin >> element;


   if (position < 1 || position > size + 1) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = size; i >= position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;

    cout << "Final Array after insertion: ";
    for (int i = 0; i < size + 1; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
