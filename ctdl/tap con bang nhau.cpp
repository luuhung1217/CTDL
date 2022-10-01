#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n+5]={};
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			sum+=s[i];
		}
		if(sum%2==1) cout<<"NO"<<endl;
		else{
			int t=sum/2;
			int dp[t+1]={};
			dp[0]=1;
			for(int i=0;i<n;i++){
				for(int j=t;j>=s[i];j--){
					if(dp[j-s[i]]==1) dp[j]=1;
				}
			}
			if(dp[t]==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;	
		}
		
	}
}

