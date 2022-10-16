#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s ,int e, int key){
    
    int start = s;
    int end = e;
    
    //This is done to avoid the overflowing of integer value 
    //of start and end are added
    int mid = start + (end-start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            return mid;
        }
        
        else if(arr[mid] < key){
            start = mid+1;
        }
        
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}

int search(vector<int> nums, int target) {
    
    int n=nums.size();
    int pivot = getPivot(nums,n);
    int ans = 0;
    
    if(target>=nums[pivot] && target<=nums[n-1]){
        ans = binarySearch(nums,pivot,n-1,target);
    }
    else{
        ans = binarySearch(nums,0,pivot-1,target);
    }
    return ans;
        
    }


int main(){
    int size,a,target;
    vector<int> nums;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"Enter the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>a;
        nums.push_back(a);
    }
    cout<<"Enter the target number";
    cin>>target;
    cout<<"The index of the target element is: "<<search(nums,target)<<endl;
}
