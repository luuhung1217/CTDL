#include<bits/stdc++.h>
using namespace std;
void hoan_vi_ke(int s[],int n){
	int i=n-1;
	while(i>0&&s[i]>s[i+1])
		i--;
	if(i<=0){
	for(int i=1;i<=n;i++)
		cout<<s[i]<<" ";
		cout<<endl;
	}
	else{
		int k=n;
		while(s[k]<s[i]) k--;
			swap(s[k],s[i]);
		int l=i+1,r=n;
		while(l<r){
			swap(s[l],s[r]);
			l++;r--;
		}
		for(int i=1;i<=n;i++)
			cout<<s[i]<<" ";
			cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[10000];
		for(int i=1;i<=n;i++)
			cin>>s[i];
		hoan_vi_ke(s,n);
	}
}
 
