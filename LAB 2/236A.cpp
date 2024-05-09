#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int cnt=0;
    string s ;
    bool visit[26]={false};
    cin>>s; 

    for (int i = 0; i < s.size(); i++)
    {
        if(!visit[s[i]-'a'])
        {
            visit[s[i]-'a']=true;
            cnt++;

        }
        
        
    }

    if(cnt%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
         
    return 0;
}