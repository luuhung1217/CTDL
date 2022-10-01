#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,p,s;
		cin>>n>>p>>s;
		int h[100],dem=1;
		for(int i=p+1;i<=s;i++){
			if(ngto(i)){
				h[dem++]=i;
			}
		}
		int danhdau[1000];
		for(int i=1;i<=n;i++){
			danhdau[i]=i;
		}
		vector<vector<int>>res;
		while(1){
			int sum=0;
			vector<int>x;
			for(int i=1;i<=n;i++)
				sum+=h[danhdau[i]];
				
			if(sum==s){
				for(int j=1;j<=n;j++)
					x.push_back(h[danhdau[j]]);
				res.push_back(x);
			}
			int i=n;
			while(i>0&&danhdau[i]>=dem-1-n+i){
				i--;
			} 
			if(i==0){
				break;
			}
			danhdau[i]+=1;
			for(int j=i+1;j<=n;j++){
				danhdau[j]=danhdau[i]+j-i;
			}
		}
		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++)
				cout<<res[i][j]<<" ";
				cout<<endl;
		}
	} 
}
