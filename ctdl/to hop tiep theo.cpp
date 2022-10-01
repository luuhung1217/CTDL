#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[1000];
		set<int>x;
		set<int>res;
		for(int i=1;i<=k;i++){
			cin>>s[i];
			x.insert(s[i]);
		}
		int i=k;
		while(i>0&&s[i]>=n-k+i) i--;
		if(i==0){
			cout<<k<<endl;
		}
		else{
			s[i]=s[i]+1;
			for(int j=i+1;j<=k;j++)
				s[j]=s[j-1]+1;
			int dem=0;	
			for(int j=1;j<=k;j++){
				if(x.find(s[j])==x.end()){
					res.insert(s[j]);
				}
 
			}
			cout<<res.size()<<endl;
		}	
	}
	return 0;
}
