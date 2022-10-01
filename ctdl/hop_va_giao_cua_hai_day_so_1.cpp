#include<bits/stdc++.h>
using namespace std;
	
int main(){
	int k;
	cin>>k;
	while(k--){
		int n,m;
		cin>>n>>m;
		int s1[100000],s2[100000];
		set<int>In;
		set<int>Un;
		for(int i=1;i<=n;i++){
		  cin>>s1[i];
		  Un.insert(s1[i]);
	    }
		
		for(int j=1;j<=m;j++){
			cin>>s2[j];
			if(Un.find(s2[j])==Un.end()){
				In.insert(s2[j]);
			}
			
		}
		for(int i=1;i<=m;i++){
			Un.insert(s2[i]);
		}
		for(int j:Un){
			cout<<j<<" ";
		}
		cout<<endl;
		for(int t:In){
			cout<<t<<" ";
		}
		cout<<endl;
	}
	system("pause");
}

