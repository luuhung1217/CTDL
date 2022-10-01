#include<bits/stdc++.h>
using namespace std;
int daucuoi(string s,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(s[i]=='8'&&s[i+1]=='8'){
			dem=1;
		}
	}
	if(dem==0&&s[0]=='8'&&s[n-1]=='6'){
		return 1;
	}
	return 0;
}
int lienke(string s,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]&&s[i]=='6'){
			dem++;
		}
	}
	if(dem<4){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		s+='8';
	}
	vector<string>res;
	if(n>5){
		for(int i=0;i<=pow(2,n);i++){
			if(daucuoi(s,n)&&lienke(s,n)){
				res.push_back(s);
			}
			int tmp=0;
			for(int j=n-1;j>=0;j--){
				if(s[j]=='8'){
					tmp=j;
					break;
				}
			}
			for(int j=tmp;j<n;j++){
				if(s[j]=='6'){
					s[j]='8';
				}
				else if(s[j]=='8'){
					s[j]='6';
				}
			}
		}
	}
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
}

