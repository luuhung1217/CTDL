#include<bits/stdc++.h>
using namespace std;
bool check_sum(int a[],int n,int s){
	int c[n+1][s+1];
	memset(c, 0, sizeof(c));
	for(int i=0;i<=n;i++){
		c[i][0]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s;j++){
			if(c[i-1][j]==1 || j-a[i]>=0&&c[i-1][j-a[i]]==1){
				c[i][j]=1;
			}
		}
	}
	return c[n][s]==1;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,s;
		cin>>n>>s;
		int a[n+2];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(check_sum(a,n,s)){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
}

