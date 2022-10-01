#include<bits/stdc++.h>
using namespace std;
int List(int a[],int n){
	int result=1;
	int f[n];
	f[0]=1;
	for(int i=1;i<n;i++){
		f[i]=1;
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				f[i]=max(f[i],f[j]+1);
			}
		}
		result=max(result,f[i]);
	}
	return result;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<List(a,n);
}

