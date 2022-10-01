#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int s[100000];
		for(int i=1;i<=k;i++){
			cin>>s[i];
		}
		int j=k;
		while(j>0&&s[j]==s[j-1]+1) j--;
		if(s[j]>1){ 
			s[j]--;
		}
		else{ 
			s[j]=n-k+1;
		}
			for(int i=j+1;i<=k;i++){
				s[i]=n+i-k;
			}
			for(int i=1;i<=k;i++){
				cout<<s[i]<<" ";
			}
		
		cout<<endl;
	}
}
