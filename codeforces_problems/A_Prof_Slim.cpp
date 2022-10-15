#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,g,positive=0,negative=0,swap;
    vector<int> v,m;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>g;
        v.push_back(g);
    }
    for(int i=0;i<n;++i)
    {
        if(v[i]<0)
        {
            negative++;
        }
        else{
            positive++;
        }
    }
if(negative>positive)
{
    swap=positive;
}
else
{
    swap=negative;
}
// lets compare 1st and last element and this way comparing both
if(n%2==0)
{
    for(int i=0;i<swap;++i)
    {
        if((v[i]>0 && v[n/2 -1-i]<0 && (-v[i])>=v[n/2 -1-i]))
        {
            v[i]=-v[i];
            v[n/2 -1-i]=-v[n/2 -1]-i;
            swap--;
        }
        else if((v[i]<0 && v[n/2 -1-i]>0 && (-v[i])<v[n/2 -1-i]))
        {
            g=0;
            break;
        }
        else if(((v[i]>0 &&v[n/2 -1-i]>0) || (v[i]<0 && v[n/2 -1-i]<0)) &&v[i]<v[n/2 -1-i]) 
        {
            continue;

        }

    }
    v=m;
    sort(v.begin(),v.end());
    if(v==m)
    {
        cout<<"YES"<<endl;
    }
    else if(g==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

}

return 0;
}