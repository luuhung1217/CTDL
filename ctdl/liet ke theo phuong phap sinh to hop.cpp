#include<bits/stdc++.h>
using namespace std;
int n,k;
int s[1000];
void tohop(int &check){
	int i=k;
	while(i>0&&s[i]>=n-k+i) i--;
	if(i>0){
		s[i]=s[i]+1;
		for(int j=i+1;j<=k;j++)
			s[j]=s[i]+j-i;
		
	}
	else check=0;
}
void xuat(){
	for(int j=1;j<=k;j++){
		cout<<s[j]<<" ";
	}
		cout<<endl;
}
void next(int check){
	for(int i=1;i<=k;i++) s[i]=i;
	while(check==1){
		xuat();
		tohop(check);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int check=1;
		next(check);
	}
	return 0;
}

