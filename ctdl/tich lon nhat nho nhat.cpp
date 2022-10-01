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
		sort(a,a+n);
		sort(b,b+m);
		long long result=0;
		result=a[n-1]*b[0];
		cout<<result<<endl;
	}
}

