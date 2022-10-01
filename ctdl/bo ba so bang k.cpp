#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		string check="NO";
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(binary_search(s+j+1,s+n,k-s[i]-s[j])){
					check="YES";
					break;
				}
			}
			if(check=="YES"){
				break;
			}
		}
		cout<<check<<endl;
	}
}

