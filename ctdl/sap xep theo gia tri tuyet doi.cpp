#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--){
		int n,m;
		cin>>n>>m;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int t,j;
		for(int i=0;i<n;i++){
			t=s[i];
			j=i-1;
			while(j>=0&&abs(s[j]-m)>abs(t-m)){
				s[j+1]=s[j];
				j--;
			}
			s[j+1]=t;
		}
		for(int i=0;i<n;i++){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	} 
}

