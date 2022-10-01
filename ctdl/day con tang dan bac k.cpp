#include<bits/stdc++.h>
using namespace std;
int n,k;
int s[105],danhdau[105],dem=0;
void thoaman(){
	int kt=1;
	for(int j=1;j<k;j++){
		if(s[danhdau[j]]>=s[danhdau[j+1]]){
			kt=0;
			break;
		}
	}
	if(kt==1)
		dem++;
}
void tohop(int &check){
	int i=k;
	while(i>0&&danhdau[i]>=n-k+i) i--;
	long long dem=0;
	if(i>0){
		danhdau[i]+=1;
		for(int j=i+1;j<=k;j++)
			danhdau[j]=danhdau[i]+j-i;
	}
	else check=0;
}
void next(int check){
	for(int i=1;i<=n;i++) danhdau[i]=i;
	while(check==1){
		thoaman();
		tohop(check);
	}
}
int main(){
	cin>>n>>k;
	int check=1;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	//dem=0;
	next(check);
	cout<<dem;
}

