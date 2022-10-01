#include<bits/stdc++.h>
using namespace std;
int n,k;
string s[100];
void lietke(int t){
	if(t>n){
		for(int i=1;i<=n;i++)
			h.push_back(s[i]);
			return;
	}
	for(string i='A';i<='B';i++){
		s[t]=i;
		lietke(t+1);
	}
}
int main(){
	cin>>n>>k;
}

