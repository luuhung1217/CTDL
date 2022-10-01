#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2){
    int dp[s1.size()+1][s2.size()+1]={0};
    for(int i=0;i<=s1.size();i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=s2.size();i++){
        dp[0][i]=0;
    }
    int result=0;
    for(int i=1;i<=s1.size();i++){
        for(int j=1;j<=s2.size();j++){
           if(s1[i-1]==s2[j-1]){
               dp[i][j]=dp[i-1][j-1]+1;
           }
           else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
           result=max(result,dp[i][j]);
        }
    }
    return result;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        string s1,s2;
        cin>> s1>>s2;
        cout<< lcs(s1,s2) <<endl;
    }
}