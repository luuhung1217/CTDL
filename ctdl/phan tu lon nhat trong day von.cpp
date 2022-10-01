#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long>s1;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		for(int i=0;i<k;i++){
			s1.insert(s[i]);
		}
		cout<<*s1.rbegin()<<" ";
		for(int i=k;i<n;i++){
			s1.erase(s[i-k]);
			s1.insert(s[i]);
			cout<<*s1.rbegin()<<" ";
		}
		//cout<<endl;
	}
}

