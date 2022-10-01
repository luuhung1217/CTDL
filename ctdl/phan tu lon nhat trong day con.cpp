#include<bits/stdc++.h>
using namespace std;
long long max(long long s[],int i,int j){
	long long max1=s[i];
	for(int t=i;t<=j;t++){
		if(s[t]>max1){
			max1=s[t];
		}
	}
	return max1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		for(int i=0,j=i+k-1;j<n;i++,j++){
			cout<<max(s,i,j)<<" ";
		}
		cout<<endl;
	}
}

