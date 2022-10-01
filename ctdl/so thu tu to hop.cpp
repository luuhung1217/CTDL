#include<bits/stdc++.h>
using namespace std;
int s[1000];
int n,k;
vector<vector<int>>res;
void tohop(){
	
	for(int i=1;i<=k;i++){
		s[i]=i;
	} 
	int check=1;
	while(check){
		vector<int>h;
		for(int i=1;i<=k;i++){
			h.push_back(s[i]);
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
		cin>>n>>k;
		res.clear();
		int s1[1000];
		for(int i=0;i<k;i++){
			cin>>s1[i];
		}
		tohop();
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

