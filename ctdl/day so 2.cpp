#include<bits/stdc++.h>
using namespace std;
int n,s[1000];
void Try(int a){
	if(a>=1){
		for(int i=1;i<=a-1;i++){
			s[i]+=s[i+1];
		}	
		Try(a-1);
		cout<<"[";
		for(int i=1;i<=a;i++){
			cout<<s[i];
			if(a==i){
				cout<<"] ";
			}
			else{
				cout<<" ";
			}
		}
		for(int i=a;i>=1;i--){
			s[i]-=s[i+1];
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>s[i];
	    }
		Try(n);
		cout<<endl;
	}
}

