#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		long long dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
			dem+=lower_bound(s,s+j,k-s[i]-s[j])-s;
			
			}
		}
		cout<<dem<<endl;
	}
}

