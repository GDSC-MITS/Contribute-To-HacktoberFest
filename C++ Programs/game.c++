#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
 int n,x,coins=0;
 cin>>n;
 vector<int> v;
 for(int i=0;i<n;++i)
 {
     cin>>x;
     v.push_back(x);
 }   
 for(int i=1;i<v.size();++i)
 {
  if(v[i]==0&&v[i-1]==1&&v[i+1]==1)
  {
      coins++;
  }   
  else if(v[i]==1&&v[i-1]==1)
  {
      continue;
  }
  else if(v[i-1]==1&&v[i]==0&&v[i+1]==0)
  {
      coins+=2;
  }
 }
 cout<<coins<<endl;
}

return 0;
}