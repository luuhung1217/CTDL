#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		long long n,k;
		cin>>n>>k;
		unordered_map<long long,long long>s1;
		vector<long long> s(1000000);
		for(int i=0;i<n;i++){
			cin>>s[i];
			s1[s[i]]++;
		}
		long long dem=0;
		for(int i=0;i<n;i++){
			if(s[i]==k-s[i]){
				dem+=(s1[s[i]]-1);
			}
			else{
				dem+=(s1[k-s[i]]);
			}
		}
		dem/=2;
		cout<<dem<<endl;
	}
	return 0;
}
