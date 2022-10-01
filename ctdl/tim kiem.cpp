#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[1000000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int check=-1;
		for(int i=0;i<n;i++){
			if(s[i]==k){
				check=1;
			}
		}
		if(check==1){
			cout<<"1";
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
	}
}

