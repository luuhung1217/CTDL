#include<bits/stdc++.h>
using namespace std;
int s[1000],danhdau[100];
int n,k;
vector<vector<int>>res;
void daycon(int a){
	for(int i=0;i<=1;i++){
		danhdau[a]=i;
		if(a==n){
			int sum=0;
			for(int j=1;j<=n;j++){
				if(danhdau[j]){
					sum+=s[j];
				}
			}
			if(sum==k){
				vector<int>h;
				for(int t=1;t<=n;t++){
					if(danhdau[t]){
						h.push_back(s[t]);
					}	
				}	
				res.push_back(h);
			}
		}
		else{
			daycon(a+1);
		} 
	}
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>s[i];
		}
		sort(s+1,s+n+1);
		res.clear();
		daycon(1);
		if(res.size()==0){
			cout<<-1<<endl;
		}
		else{
			sort(res.begin(),res.end());
			for(int i=0;i<res.size();i++){
				cout<<"[";
				for(int j=0;j<res[i].size()-1;j++){
					cout<<res[i][j]<<" ";
				}	
					cout<<res[i][res[i].size()-1];
					cout<<"] ";
			}
			cout<<endl;	
		}
	}
}

