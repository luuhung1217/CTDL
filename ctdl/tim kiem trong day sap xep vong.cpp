#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		long long tmp=0;
		for(int i=0;i<n;i++){
			if(s[i]==x){
				tmp=i+1;
			}
		}
		cout<<tmp<<endl;
	}
}

