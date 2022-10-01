#include<bits/stdc++.h>
using namespace std;
long canbang(int s[],int n){
	long long sum=0,sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		sum+=s[i];
	}
	for(int i=0;i<n;i++){
		sum-=s[i];
		sum1=sum;
	    if(sum1==sum2)
			return i+1;
		sum2+=s[i];
	}
	return -1;
}
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
		cout<<canbang(s,n)<<endl;
	}
}

