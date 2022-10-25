#include <stdio.h>

int dp[1000001] = {-1};

int func(int n){
    if(n<=0) return n;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = func(n-1) + func(n-2);
}

int main() {
    int n ;
    scanf("%d", &n);
    for (int i = 0; i < 1000001; i++)
        dp[i]=-1;
    int ans = func(n);
    printf("%d", ans);
}