#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
int s[1000],danhdau[1000],n,k;
void lk(int j){
	for(int i=0;i<=1;i++){
		danhdau[j]=i;
	
	if(j==n){
		int sum=0;
		for(int t=1;t<=n;t++)
			if(danhdau[t])
				sum+=s[t];
		if(sum==k){
			vector<int>h;
			for(int t=1;t<=n;t++)
				if(danhdau[t])
					h.push_back(s[t]);
			res.push_back(h);
		}
	}
	else lk(j+1);
	}
}
int main(){
	res.clear();
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	lk(1);
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++)
			cout<<res[i][j]<<" ";
		
		cout<<endl;
	}
}

