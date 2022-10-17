#include <bits/stdc++.h>
using namespace std; 

int findMin(vector<int>& nums) {
    int n = nums.size();
    if(n == 0)  return -1;
    int low = 0;
    int high = n-1;

    if(nums[low] <= nums[high]){
        return nums[0];
    }

    int pos = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid]<nums[(mid-1+n)%n] && nums[mid]<nums[(mid+1)%n]){
            pos = mid;  break;
        }
        else if(nums[mid] >= nums[0]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return nums[pos];
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The minimum element in rotated sorted array is: "<<findMin(arr)<<endl;

    return 0;
}



        
        
