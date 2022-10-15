#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int x1,x2,y1,y2,a,b,c,d;
int area;
cin>>x1>>y1>>x2>>y2;
cin>>a>>c>>b>>d;
int a1=(x2-x1)*(y2-y1);
int a2=(c-a)*(d-b);
int li=max(a,x1);
int ri=min(x2,c);
int bi=max(y1,b);
int ui=min(y2,d);
int inta=(ri-li)*(ui-li);
// overlapping case
if((li<ri && bi<ui))
{
area=a1+a2-inta;
}
else{
    area=a1+a2;
}
cout<<area<<endl;
return 0;
}