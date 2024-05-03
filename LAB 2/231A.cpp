#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        int x,y,z,sum;
        cin>>x>>y>>z;
        sum = x+y+z;
        if(sum>1){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}
