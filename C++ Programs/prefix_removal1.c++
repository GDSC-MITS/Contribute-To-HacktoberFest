#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
     string s;
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
        size_t found = s.find(s[i],i+1);
        if (found!=std::string::npos)
        {
            
            continue;
        } 
        else{
            s.erase(0,i);
            break;
        }
    }
    cout<<s<<endl;
}

return 0;
}