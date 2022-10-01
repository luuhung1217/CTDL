#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		int so[100000],dem[100000],dem1=0,k=0;
		for(int i=0;i<n;i++){
			k++;
			if(s[i]!=s[i+1]){
				so[dem1]=s[i];
				dem[dem1]=k;
				dem1++;
				k=0;	
			}
		}
		for(int i=0;i<dem1;i++){
			for(int j=0;j<dem1;j++){
				if(dem[j]<dem[j+1]){
					swap(dem[j],dem[j+1]);
					swap(so[j],so[j+1]);	
				}
			}
		}
		for(int i=0;i<dem1;i++){
			for(int j=0;j<dem[i];j++){
				cout<<so[i]<<" ";
			}
		}
		
		cout<<endl;
	}
	return 0;
}

