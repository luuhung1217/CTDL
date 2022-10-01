#include<bits/stdc++.h>
using namespace std;
void to_hop_ke(int s[],int n,int k){
	int i=k;
	while(i>0&&s[i]>=n-k+i) i--;
	if(i<=0){
		for(int i=1;i<=k;i++)
			cout<<i<<" ";
			cout<<endl;
	}
	else{
		s[i]=s[i]+1;
		for(int j=i+1;j<=k;j++)
			s[j]=s[j-1]+1;
		
			
		for(int j=1;j<=k;j++)
			cout<<s[j]<<" ";
			cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[10000];
		for(int i=1;i<=k;i++){
			cin>>s[i];
		}
		to_hop_ke(s,n,k);
	}
}

