#include<bits/stdc++.h>
using namespace std;
int n,k;
int s[1000],danhdau[1000];
vector<vector<int>>res;
void tong(int i){
	for(int j=0;j<=1;j++){
		danhdau[i]=j;
	if(i==n-1){
		int sum=0;
		for(int t=0;t<n;t++)
			if(danhdau[t])
				sum+=s[t];
		if(sum==k){
			vector<int>h;
			for(int t=0;t<n;t++)
				if(danhdau[t])
				h.push_back(s[t]);	
			res.push_back(h);
		}
		
	}
	else tong(i+1);
	}
}
int main(){
	res.clear();
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	tong(0);
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++)
			cout<<res[i][j]<<" ";
		cout<<endl;
	}
	cout<<res.size();
}

