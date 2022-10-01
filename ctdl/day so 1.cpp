#include<bits/stdc++.h>
using namespace std;
int k;
int s[1000];
void Try(int n){
	
	if(n>=1){
		cout<<"[";
		for(int i=1;i<=n;i++){
			cout<<s[i];
			if(n==i){
				cout<<"]";
			}
			else{
				cout<<" ";
			}
	}
	cout<<endl;
	for(int i=1;i<=n-1;i++){
		s[i]+=s[i+1];
	}
	Try(n-1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>k;
		for(int i=1;i<=k;i++)
			cin>>s[i];
		Try(k);
	} 
}

