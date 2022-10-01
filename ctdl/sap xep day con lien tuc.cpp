#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		long long n;
		cin>>n;
		long long a[100000],s[100000],dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			s[dem++]=a[i];
		}
		sort(s,s+dem);
		int tmp1=0,tmp2=0;
		for(int i=0;i<dem;i++){
			if(s[i]!=a[i]){
				tmp1=i+1;
				break;
			}
		}
		for(int i=dem-1;i>=0;i--){
			if(s[i]!=a[i]){
				tmp2=i+1;
				break;
			}
		}
		cout<<tmp1<<" "<<tmp2<<endl;
	}
}

