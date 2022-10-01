#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		int dem=0;
		for(int i=0;i<n-1;i++){
			if(s[i]!=s[i+1]){
				dem++;
			}
		}
		if(dem>0){
			cout<<s[0]<<" "<<s[1];
		}
		else {
			cout<<"-1";
		}
		cout<<endl;
	}
}

