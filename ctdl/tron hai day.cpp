#include<bits/stdc++.h>
using namespace std;
void nhap(long long s[],long long n){
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long a[100000],b[100000];
		nhap(a,n);
		nhap(b,m);
		long long s[100000],dem=0;
		for(int i=0;i<n;i++){
			s[dem++]=a[i];
		}
		for(int i=0;i<m;i++){
			s[dem++]=b[i];
		}
		sort(s,s+dem);
		for(int i=0;i<dem;i++){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
}

