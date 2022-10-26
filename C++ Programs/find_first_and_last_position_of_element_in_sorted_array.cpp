#include <bits/stdc++.h>
using namespace std; 

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans{-1,-1};
    int n = nums.size();
    int low = 0;
    int high = n-1;
    if(n == 0)  return ans;
    
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target){
            ans[0] = mid;
        }
        if(nums[mid] >= target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    low = 0;
    high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target){
            ans[1] = mid;
        }
        if(nums[mid] <= target){
            low = mid + 1;
        }
        else{
            high = mid - 1;                
        }
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
    int tar;
    cin>tar;

    vector<int> ans = searchRange(arr,tar);
    cout<<"The First and Last Position of Element in Sorted Array is: "<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}
