#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n); 
		for(int i=0;i<n/2;i++){
			cout<<s[n-i-1]<<" "<<s[i]<<" ";
		}
		if(n%2!=0){
			cout<<s[n/2];
  		}
  	cout<<endl;
	}
	return 0;
}

