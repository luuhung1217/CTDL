#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void tohop(int n,int k){
	int s[100];
	for(int i=1;i<=k;i++){
		s[i]=i;
	} 
	int check=1;
	while(check){
		vector<int>h;
		for(int j=1;j<=k;j++){
			h.push_back(s[j]);
		}
		res.push_back(h);
		int i=k;
		while(i>0&&s[i]>=n-k+i) i--;
		if(i>0){
			s[i]=s[i]+1;
			for(int j=i+1;j<=k;j++)
				s[j]=s[i]+j-i;	
		}
		else check=0;
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		res.clear();
		tohop(n,k);
		for(int i=res.size()-1;i>=0;i--){
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

