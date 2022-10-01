#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		long long dem=0;
		for(int i=0;i<n-1;i++){
			int c=s[i]+k;
			int tmp=lower_bound(s,s+n,c)-s;
			int tmp1=tmp-i-1;
			if(tmp1>=1){
				dem+=tmp1;
			}
		}
		cout<<dem<<endl;
	}
}

