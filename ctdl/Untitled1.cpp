#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[10000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int dem=0,t;
		for(int i=0;i<n-1;i++){
			t=i;
			int p=0;
			for(int j=i+1;j<n;j++){
				if(s[t]>s[j]){
					t=j;
					p=1;
				}
			}
			if(p==1){
				swap(s[t],s[i]);
				dem++;
			}
			
		}
		cout<<dem<<endl;
	}
}

