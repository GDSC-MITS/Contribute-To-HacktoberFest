#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int female=0;
   for(int i=1;i<s.length();++i)
   {
       if(s[i]=='1'&&s[i-1]=='0'&&s[i+1]=='0')
       {
           female++;
       }
        else if(s[i]=='0'&&s[i-1]=='0')
        {
            female+=2;
        }
   }
   
   cout<<female<<endl;
   
  
}
return 0;
}