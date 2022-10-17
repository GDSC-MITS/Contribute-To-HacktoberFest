#include <bits/stdc++.h>
using namespace std; 

int maxProduct(vector<int>& nums) {
    int tmn = 1, tmx = 1;
    int ans = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        int mn = tmn;
        int mx = tmx;
        
        tmn = min(mx*nums[i],min(mn*nums[i],nums[i]));
        tmx = max(mn*nums[i],max(mx*nums[i],nums[i]));
        
        ans = max(ans,max(tmx,nums[i]));
    }
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The maximum product of a subarray in array is: "<<maxProduct(arr)<<endl;

    return 0;
}
