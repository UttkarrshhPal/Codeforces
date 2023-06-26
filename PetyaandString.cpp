#include <bits/stdc++.h>
// #include<iostream>

using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    // converting them into lowercase
    // lowercase starts from 97 and uppercase ends at 92
    for(int i = 0;i<s1.size();i++)
    {
        if(s1[i]<91)
        {
            s1[i]+=32;
        }
        if(s2[i]<91)
        {
            s2[i]+=32;
        }
    }
    if(s1>s2)
    cout<<"1";
    if(s1<s2)
    cout<<"-1";
    if(s1==s2)
    cout<<"0";

    
    
    

}