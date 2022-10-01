#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		long long s[100000],a[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		a[n-1]=s[n-1];
		for(int i=n-2;i>=0;i--){
			a[i]=max(a[i+1],s[i]);
		}
		int i=0,j=0;
		int max1=INT_MIN;
		while(i<n&&j<n){
			if(s[i]<a[j]){
				max1=max(max1,j-i);
				j++;
			}
			else{
				i++;
			}
		}
		cout<<max1<<endl;
	}
}

