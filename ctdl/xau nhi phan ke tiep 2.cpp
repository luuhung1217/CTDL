#include<bits/stdc++.h>
using namespace std;
void xaunhiphan(string s){
	int i=s.size()-1;
	while(i>=0&&s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i>=0)
		s[i]='1';
	for(int j=0;j<s.size();j++){
			cout<<s[j];
	}
}
int main(){
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		xaunhiphan(s);
		cout<<endl;
	}
}

