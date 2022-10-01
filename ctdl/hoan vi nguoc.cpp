#include<bits/stdc++.h>
using namespace std;
int n;
int s[100],x[100];
vector<vector<int>>res;
void hoanvi(int a){
	if(a>n){
	vector<int>h;
		for(int i=1;i<=n;i++)
			h.push_back(s[i]);
		res.push_back(h);
	}
	for(int i=1;i<=n;i++)
		if(x[i]==0){
			s[a]=i;
			x[i]=1;
			hoanvi(a+1);
			x[i]=0;
		}
}
void in(){
	for(int i=res.size()-1;i>=0;i--){
		for(int j=0;j<res[i].size();j++)
			cout<<res[i][j];
		cout<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		res.clear();
		for(int i=0;i<=20;i++)
			x[i]=0;
			hoanvi(1);
			in();
			cout<<endl;
	}
}

