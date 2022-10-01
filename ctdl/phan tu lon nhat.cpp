#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		for(int i=n-1;i>=n-k;i--){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
}

