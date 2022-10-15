#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,y=1;
    cin>>n;
    vector<int> v;
    int m,count3=0,count2=0;
    for(int i=0;i<n;++i)
    {
        cin>>m;
        v.push_back(m);
    }
    // for(int i=0;i<n-1 && n>1;++i)
    // {
    //     if((v[i+1]-v[i])==3)
    //     {
    //         count3++;
    //         continue;
    //     }
    //     else if((v[i+1]-v[i])==2)
    //     {
    //         count2++;
    //     }
    //     else if((v[i+1]-v[i])==1)
    //     {
    //         continue;
    //     }
    //     else{
    //         y=0;
    //         break;
             
    // //     }
    // }
    // if(y==0 || count2>3 || count3>1)
    // {
    //     cout<<"NO"<<endl;
    // }
    // else
    // {
    //     cout<<"YES"<<endl;
    // }
    

}

return 0;
}