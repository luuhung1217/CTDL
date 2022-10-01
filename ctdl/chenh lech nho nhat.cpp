#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		long long tmp=s[n-1]-s[n-2];
		for(int i=0;i<n-1;i++){
			if((s[i+1]-s[i])<tmp){
				tmp=s[i+1]-s[i];
			}
		}
		cout<<tmp<<endl;
	}
}

