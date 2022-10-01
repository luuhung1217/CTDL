#include<bits/stdc++.h>
using namespace std;
char charactor(long long n,long long k){
	long long tmp=pow(2,n-1);
	if(k==tmp)
		return (n-1+'A');
	if(k>tmp)
		return charactor(n-1,k-tmp);
	return charactor(n-1,k);
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		cout<<charactor(n,k)<<endl;
	}
}

