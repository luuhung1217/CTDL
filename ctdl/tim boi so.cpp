#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[8]={9,90,99,900,909,990,999,9000};
		for(int i=1;i<=8;i++){
			if(s[i]%n==0){
				cout<<s[i];
				break;
			}
		}
		cout<<endl;
	}
}

