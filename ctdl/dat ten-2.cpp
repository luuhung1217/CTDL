#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[100];
		char s[100];
		for(int i=1;i<=k;i++){
			a[i]=i;
			s[i]=64+i;
		}
		while(1){
			for(int i=1;i<=k;i++)
				cout<<s[i];
				cout<<endl;
			int i=k;
			while(i>0&&a[i]>=n-k+i){
				i--;
			} 
			if(i==0){
				break;
			}
			a[i]+=1;
			s[i]+=1;
			for(int j=i+1;j<=k;j++){
				a[j]=a[i]+j-i;
				s[j]=s[i]+j-i;
			}
		}
	}
}

