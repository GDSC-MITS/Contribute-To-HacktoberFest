#include <bits/stdc++.h>
using namespace std; 

vector<vector<int>> ans;

void func(vector<int>& nums,int i,vector<int> v){
    if(i == nums.size()){
        ans.push_back(v);
        return;
    }
    for(int k=i; k<nums.size(); k++){
        v.push_back(nums[k]);
        swap(nums[k],nums[i]);
        func(nums,i+1,v);
        swap(nums[k],nums[i]);
        v.pop_back();
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<int>v;
    func(nums,0,v);
    return ans;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    auto finans = permute(arr);
    cout<<"All possible permutation for given array are:"<<endl;

    for(auto x: finans){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}
