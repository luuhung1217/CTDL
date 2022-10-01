#include<bits/stdc++.h>
using namespace std;
void xaunhiphan(char s[]){
	int i=strlen(s)-1;
	while(i>=0&&s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i>=0)
		s[i]='1';
}
int main(){
	int t;
	cin>>t;
	char s[100];
	while(t--){
		cin>>s;
		xaunhiphan(s);
		cout<<s<<endl;
	}
}

