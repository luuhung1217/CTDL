#include<bits/stdc++.h>
using namespace std;
int a;
char x[100];
void lietke(int t){
	if(t>a){
		for(int i=1;i<=a;i++)
			cout<<x[i];
			cout<<" ";
			return;
	}
	for(char i='A';i<='B';i++){
		x[t]=i;
		lietke(t+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>a;
		lietke(1);
		cout<<endl;
	}
}

