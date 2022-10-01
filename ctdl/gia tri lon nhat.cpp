#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	long long sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		sum1+=s[i];
		sum2+=abs(s[i]);
	}
	cout<<sum1+sum2;
}

