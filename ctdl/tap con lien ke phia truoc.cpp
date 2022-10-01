#include<bits/stdc++.h>
using namespace std;
void tap_con_ke_tiep(int s[],int n,int k){
	int i=k;
	while(i>0&&s[i]>=n-k+i) i--;
	if(i>=k){
		for(int i=n-k+1;i<=n;i++)
			cout<<i<<" ";
	}
	else{
		for(int j=i+1;j<=k;j++){
			s[j]=s[j-1]+1;
		}
		for(int j=1;j<=k;j++){
			cout<<s[j]<<" ";
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int s[100000];
		for(int i=1;i<=k;i++){
			cin>>s[i];
		}
		tap_con_ke_tiep(s,n,k);
		cout<<endl;
	}
}

