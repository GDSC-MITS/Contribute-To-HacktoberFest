#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int t;
cin>>t;
while(t--)
{
   unsigned long long int n,fact=1,mod=998244353;
    cin>>n;
    if(n%2==0)
    {
        for(unsigned long long int i=1; i<=n/2; ++i)
        {fact = ((fact %mod)* (i%mod))%mod;
        }
        cout<<((fact%mod)*(fact%mod))%mod<<endl;
    }
    
    else
    {
        cout<<0<<endl;
    }
    
}

return 0;
}