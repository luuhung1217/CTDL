#include<bits/stdc++.h>
using namespace std;
int kt(string s,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(s[i]=='H'&&s[i+1]=='H'){
			dem=1;
		}
	}
	if(dem==0&&s[0]=='H'&&s[n-1]=='A'){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		vector<string>h;
		int n;
		cin>>n;
		string s;
		for(int i=0;i<n;i++){
				s+='H';
		}
		for(int j=0;j<=pow(2,n);j++){
			if(kt(s,n)){
				h.push_back(s);
			}
			int tmp=0;
			for(int i=n-1;i>=0;i--){
				if(s[i]=='H'){
					tmp=i;
					break;
				}
			}
			for(int i=tmp;i<n;i++){
				if(s[i]=='H')
					s[i]='A';
				else if(s[i]=='A')
					s[i]='H';
			}
		}
		sort(h.begin(),h.end());
		for(int i=0;i<h.size();i++){
			cout<<h[i]<<endl;
		}
	} 
}

