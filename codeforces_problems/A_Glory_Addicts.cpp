#include <bits/stdc++.h>
#include <iostream>
 #include <numeric>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i=0;
        cin >> n;
        vector<int> skill_type;
        for (int i = 0; i < n; ++i)
        {
            cin>>i;
            skill_type.push_back(i);
        }
        vector<int> damage;
        for (int i = 0; i < n; ++i)
        {
            cin>>i;
            damage.push_back(i);
        }
        vector<int> indices_0;

        vector<int> indices_1;
        for (int i = 0; i < n; ++i)
        {
            if(damage[i]==0)
            {
                indices_0.push_back(i);

            }
            else
            {
                indices_1.push_back(i);
            }
        }
        vector<int> damage_0;

        vector<int> damage_1;
        for (int i = 0; i < indices_0.size(); ++i)
        {
            damage_0.push_back(damage[i]);
        }
        for (int i = 0; i < indices_1.size(); ++i)
        {
            damage_1.push_back(damage[i]);
        }
        sort(damage_0.begin(), damage_0.end());
        sort(damage_1.begin(), damage_1.end());
        reverse(damage_0.begin(), damage_0.end());
        reverse(damage_1.begin() , damage_1.end());
        int no_of_0=indices_0.size();
        int no_of_1=indices_1.size();

    //  making three cases
    if(no_of_0==no_of_1)
    {   
    
        if (damage_0[no_of_0-1]<=damage_1[no_of_1-1])
        { 
            int t=damage_0[no_of_0-1];
            damage_0.pop_back();
            int sum1= accumulate(damage_1.begin(), damage_1.end(), 0);
            int sum2= accumulate(damage_0.begin(), damage_0.end(), 0);
            int result=sum1*2 + sum2*2 + t;
            cout<<result<<endl;
        }
        else{ 
            int t=damage_0[no_of_0-1];
            damage_1.pop_back();
            int sum1= accumulate(damage_1.begin(), damage_1.end(), 0);
            int sum2= accumulate(damage_0.begin(), damage_0.end(), 0);
            int result=sum1*2 + sum2*2 + t;
            cout<<result<<endl;
        }
    }       
    else if(no_of_0==0 or no_of_1==0)
    { 
        int sum1= accumulate(damage_1.begin(), damage_1.end(), 0);
        int sum2= accumulate(damage_0.begin(), damage_0.end(), 0);
        int result=sum1 + sum2;
         cout<<result<<endl;
    }
    else{ 
        if (no_of_0<no_of_1) {
            int sum1= accumulate(damage_1.begin(), damage_1.begin()+ no_of_0, 0);
            int sum3=accumulate(damage_1.begin()+no_of_0, damage_1.end(), 0);
            int sum2= accumulate(damage_0.begin(), damage_0.end(), 0);
            int result=sum2*2 +sum1*2 +sum3 ;
            cout<<result<<endl;
            }
        else{ 
            int sum1= accumulate(damage_0.begin(), damage_0.begin()+ no_of_1, 0);
            int sum3=accumulate(damage_0.begin()+no_of_1, damage_0.end(), 0);
            int sum2= accumulate(damage_1.begin(), damage_1.end(), 0);
            int result=sum2*2 +sum1*2 +sum3 ;
            cout<<result<<endl;
          }
    }
    
    
    } // for while loop

}