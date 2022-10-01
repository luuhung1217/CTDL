#include<bits/stdc++.h>
using namespace std;
int n;
int s[10001],x[10001],h[10001];
void hoanvi(int a){
	if(a>n){
		for(int i=1;i<=n;i++)
			cout<<h[s[i]]<<" ";
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
		if(x[i]==0){
			s[a]=i;
			x[i]=1;
			hoanvi(a+1);
			x[i]=0;
		}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	sort(h+1,h+n+1);
	for(int i=0;i<=20;i++){
		x[i]=0;
	}
	hoanvi(1);
	
}

