#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,x,c,d;
    
    cin>>n>>q;
    vector<vector<int>> v;
    for(int i=0;i<n;++i)
    {
        cin>>x;
    
        v[i].push_back(x);
           
        cout<<"value taken "<<v[i].size()<<"\n";
    }
    for(int k=0;k<q;++k)
    {
        cin>>c>>d;
        cout<<"\n";
        cout<<v[c][d];
        
    }
    
return 0;
}