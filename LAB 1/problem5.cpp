#include<bits/stdc++.h>
using namespace std;

int main() {

    int Array[3][3] = { {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9} };
    int row, col;
    cin >> row >> col;
    cout << "Element at index[0 Based] (" << row << ", " << col << ") is: " << Array[row][col] << endl;
}
