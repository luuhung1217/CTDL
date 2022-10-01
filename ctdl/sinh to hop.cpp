#include<bits/stdc++.h>
using namespace std;
int n,k;
int s[100];
void tohop(int i){
	if(i>k){
		for(int i=1;i<=k;i++)
			cout<<s[i];
			cout<<" ";
			return;
	}
	for(int j=s[i-1]+1;j<=n-k+i;j++){
		s[i]=j;
		tohop(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		tohop(1);
		cout<<endl;
	}
}

