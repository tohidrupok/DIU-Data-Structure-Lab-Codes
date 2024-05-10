#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arrA[n+1],arrB[n+1];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x;
        arrA[i]=x;
        cin>>y;
        arrB[i]=y;
    }
    for(int i =0;i<n;i++)
    {
        if(arrA[i]<arrB[i])
            cout<< arrA[i] << " "<< arrB[i] <<endl;
        else
            cout<< arrB[i] << " "<< arrA[i] <<endl;

    }
}
