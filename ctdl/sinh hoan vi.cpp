#include<bits/stdc++.h>
using namespace std;
int n;
int s[100],x[100];
void hoanvi(int i){
	if(i>n){
		for(int j=1;j<=n;j++)
			cout<<s[j];
			cout<<" ";
	}
	for(int j=1;j<=n;j++)
		if(x[j]==0){
			s[i]=j;
			x[j]=1;
			hoanvi(i+1);
			x[j]=0;
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<=20;i++)
			x[i]=0;
			hoanvi(1);	
			cout<<endl;
	}
}

