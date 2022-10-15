#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t,a;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    if(s.length()%2==0)
    { a=(s.length())/2;}
    else{
         a=((s.length()-1)/2);
    }
    for(int i=0;i<a;++i)
    {
        int found = s.find(s.substr(0,a-i),a-i);
        if(found != string::npos)
        {
         s.erase(0,a-i);
                i-=1;
        }
    }
    cout<<s<<endl;
}
return 0;
}