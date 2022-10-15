#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{

    int l,r,a;
    cin>>l>>r>>a;
    int t=l%a,e;
    for(int i=l;i<=r;++i)
    {
        if(i%a>t)
        {
            t=i%a;
            e=i;
        }
    }
    if(t==l%a)
    { 
    cout<< t +round(l/a)<<endl;
    }
    else{
            cout<< t +round(e/a)<<endl;
    }
}

return 0;
}