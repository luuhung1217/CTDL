#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int dem=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(abs(s[j]-s[i])<k){
					dem++;
				}
			}	
		}
		cout<<dem<<endl;
	}
}

