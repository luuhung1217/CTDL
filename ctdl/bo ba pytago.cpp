#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s[100000];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		sort(s,s+n);
		for(int i=0;i<n;i++)
			s[i]=s[i]*s[i];
		
		int dem=0;
		for(int i=0;i<n;i++){
			long long a=s[i];
			int left=n-2,right=n-1;
			while(i<left){
				long long result=s[right]-s[left];
				if(result==a){
					dem++;
					left++;right--;
				}
				else if(result>a){
					right--;
				}
				else{
					left--;
				}
			}
		}
		if(dem>0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}

