#include<bits/stdc++.h>
using namespace std;
void xuat(int s[],int k){
	for(int j=1;j<=k;j++){
		cout<<s[j]<<" ";
	}
		cout<<endl;
}
void tohop(int n,int k){
	int s[k];
	for(int i=1;i<=n;i++){
		s[i]=i;
	} 
	int check=1;
	while(check==1){
		xuat(s,k);
		int i=k;
		while(i>0&&s[i]>=n-k+i) i--;
		if(i>0){
			s[i]=s[i]+1;
			for(int j=i+1;j<=k;j++)
				s[j]=s[i]+j-1;	
		}
		else check=0;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		tohop(n,k);
	}
	system("pause");
	return 0;
}

