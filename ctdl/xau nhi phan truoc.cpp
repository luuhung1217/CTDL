#include<bits/stdc++.h>
using namespace std;
void nhiphantruoc(string s){
	int i=s.size()-1;
	 while(i>=0&&s[i]=='0'){
	 	s[i]='1';
	 	i--;
	 }
	if(i>=0){
		s[i]='0';
	}
	for(int j=0;j<s.size();j++){
		cout<<s[j];
	}
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		nhiphantruoc(s);
		cout<<endl;
	}
}

