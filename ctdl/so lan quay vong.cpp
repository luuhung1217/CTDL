#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long s[100000],b[100000],dem=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			b[dem++]=s[i];
		}
		sort(b,b+dem);
		long long check=0;
		for(int i=0;i<n;i++){
			if(s[i]==b[0]){
				check=i;
			}
		}
		cout<<check<<endl;
	}
}

