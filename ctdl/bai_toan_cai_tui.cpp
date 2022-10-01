#include<bits/stdc++.h>
using namespace std;
int best_value(int a[],int c[],int n, int v){
    int dp[n+1][n+1]={0};
    for(int i=1;i<=n;i++){
        dp[0][1]=0;
        dp[1][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=v;j++){
            if(c[j]>=a[i]){
                dp[i][j]=max(dp[i-1][j])
            }
        }
    }
}
int main(){

}