#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		int s1[100000]={};
		for(int i=0;i<n;i++){
			s1[s[i]]++;
		}
		int dem=0;
		for(int i=s[0];i<=s[n-1];i++){
			if(s1[i]==0){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
