#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		set<long long>k;
		int n;
		cin>>n;
		long long s[1000000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		long long kt=-1;
		for(int i=n-1;i>=0;i--){
			if(k.find(s[i])!=k.end())
				kt=i;
			else
				k.insert(s[i]);
		}
		if(kt==-1){
			cout<<"NO";
		}
		else{
			cout<<s[kt];
		}
		cout<<endl;
	}
}


