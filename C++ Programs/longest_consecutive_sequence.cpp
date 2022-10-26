#include <bits/stdc++.h>
using namespace std; 

int longestConsecutive(vector<int>& nums) {
    if(nums.empty())    return 0;
    
    int n = nums.size();
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)  mp[nums[i]]++;
    
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        int elt = nums[i]-1;
        if(mp[elt] == 0){
            int k = nums[i];
            int cnt = 1;
            while(1){
                k++;
                if(mp[k] != 0){
                    cnt++;
                }
                else{
                    break;
                }
            }
            ans = max(cnt,ans);
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

    cout<<"The length of the longest consecutive elements sequence is: "<<longestConsecutive(arr)<<endl;

    return 0;
}
