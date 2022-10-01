#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
int s[100],x[100];
int n;
void hoanvi(int a){
	if(a>n){
		vector<int>h;
		for(int i=1;i<=n;i++)
			h.push_back(s[i]);
		
		res.push_back(h);
	}
	for(int i=1;i<=n;i++){
		if(x[i]==0){
			s[a]=i;
			x[i]=1;
			hoanvi(a+1);
			x[i]=0;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		res.clear();
		int s1[n];
		for(int i=0;i<n;i++){
			cin>>s1[i];
		}
		for(int i=0;i<=20;i++)
			x[i]=0;
			hoanvi(1);
		int tmp=0;
		for(int i=0;i<res.size();i++){
			int dem=0;
			for(int j=0;j<res[i].size();j++){
				if(s1[j]==res[i][j]){
					dem++;
					tmp=i+1;
				}
			}
			if(dem==res[i].size()){
				cout<<tmp;
			}
		}
		cout<<endl;
	}
}

