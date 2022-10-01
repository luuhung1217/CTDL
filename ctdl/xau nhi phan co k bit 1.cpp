#include<bits/stdc++.h>
using namespace std;
int s[100];
int n,k; 
int thoa_man(int s[]){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(s[i]==1){
			dem++;
		}
	}
	if(dem==k){
		return 1;
	}
	return 0;
}
void nhiphan(int x){
	int dem=0;
	if(x>n){
		for(int i=1;i<=n;i++)
			if(thoa_man(s)){
				cout<<s[i];
				dem++;
				if(dem==n){
					cout<<endl;
					dem=0;
				}
			}
		return;
	}
	for(int i=0;i<=1;i++){
		s[x]=i;
		nhiphan(x+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		nhiphan(1);
	}
}

