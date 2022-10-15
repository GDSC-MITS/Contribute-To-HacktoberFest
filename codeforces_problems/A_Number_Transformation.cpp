#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
long int t;
cin>>t;
while(t--)
{
 int x,y;
 cin>>x>>y;
 int a=1,b=1;
for(long long int i=0;i<y && b<y;++i) 
{

    for(int j=0;j<y;++j)
    { 
    
    if(x*pow(b,a)==y)
    {
        cout<<a<<" "<<b<<endl;
        break;
    }
    else
    {
        a++;

    }
    }
    b++;
}   
if(x*pow(b,a)!=y)
{
    cout<<"0"<<" "<<"0"<<endl;
}
}

return 0;
}