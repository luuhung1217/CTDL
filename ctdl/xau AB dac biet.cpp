#include<bits/stdc++.h>
using namespace std;
int thoa_man(string s,int n,int k){
	int dem1=0,dem2=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A')
			dem1++;
		else
			dem1=0;
		if(dem1>k)
			return 0;
		else if(dem1==k)
			dem2++;
	}
	if(dem2==1)
		return 1;
	return 0;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<string>res;
	string s;
	for(int i=0;i<n;i++){
		s+='A';
	}
	for(int i=0;i<=pow(2,n);i++){
		if(thoa_man(s,n,k)){
			res.push_back(s);
		}
		int tmp=0;
		for(int j=n-1;j>=0;j--){
			if(s[j]=='A'){
				tmp=j;
				break;
			}
		}
		for(int j=tmp;j<n;j++){
			if(s[j]=='A')
				s[j]='B';
			else if(s[j]=='B')
				s[j]='A';
		}
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
}

