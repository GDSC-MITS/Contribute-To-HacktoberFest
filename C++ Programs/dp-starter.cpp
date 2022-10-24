#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define vs vector <string>
#define sz(v) v.size()
#define all(v) v.begin(),v.end()
#define ll long long

vector<int> dp(1000001,-1);

int func(int n){
    if(n<=0) return n;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = func(n-1) + func(n-2);
}

signed main() {
    int n ;
    cin >> n ;
    int ans = func(n);
    cout<< ans << '\n';
}