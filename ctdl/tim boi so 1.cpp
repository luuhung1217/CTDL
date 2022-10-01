#include<bits/stdc++.h>
using namespace std;
int m,s[100],n; 
bool check;
long long res=1e18;
void Try(int i){
	for(int j=0;j<=1;j++){
		s[i]=j;
		if(i==m){
			long long result=0;
			for(int t=1;t<=m;t++)
				result=10*result+s[t];
				result*=9;
				if(result%n==0&&result>=n){
					res=min(res,result);
					check=true;
				}
		}
		else Try(i+1);
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		m=1;
		cin>>n;
		check=false;
		res=1e18;
		while(m<=17&&!check){
			Try(1);
			m+=1;
		}
		cout<<res<<endl;
	}
}

