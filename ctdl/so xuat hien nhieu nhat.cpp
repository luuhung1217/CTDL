#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s[100000],s1[100000]={};
		for(int i=0;i<n;i++){
			cin>>s[i];
			s1[s[i]]++;
		}
		long long check=-1,tmp;
		for(int i=0;i<n;i++){
			if(s1[s[i]]>(n/2)){
				tmp=s[i];
				check=1;
			}
		}
		if(check==-1){
			cout<<"NO";
		}
		else{
			cout<<tmp;
		}
		cout<<endl;
	}
}

