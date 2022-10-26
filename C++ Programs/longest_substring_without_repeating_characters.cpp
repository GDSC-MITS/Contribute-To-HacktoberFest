#include <bits/stdc++.h>
using namespace std; 

int lengthOfLongestSubstring(string s) {
    if(s.empty())   return 0;
    if(s.size() <= 1){
        return 1;
    }
    unordered_map<char,int> mp;
    int start = 0, end = 0;
    int n = s.size();
    int ans = 1;
    while(end < n){
        mp[s[end]]++;
        if(start < end && mp[s[end]] > 1){
            while(mp[s[end]] > 1){
                mp[s[start]]--;
                start++;
            }
        }
        else{
            ans = max(ans, end-start+1);
        }
        end++;
    }
    return ans;
}

int main(){

    string s;
    cin>>s;

    cout<<"The Longest Substring Without Repeating Characters is: "<<lengthOfLongestSubstring(s)<<endl;

    return 0;
}
