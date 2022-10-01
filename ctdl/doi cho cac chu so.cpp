#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		for(int i=0;i<s.size()-1;i++){
			char max=s[s.size()-1];
			int vt=s.size()-1;
			for(int j=s.size()-1;j>i;j--){
				if(max<s[j]){
					max=s[j];
					vt=j;
				}
			}
			if(max>s[i]&&k>0){
				swap(s[i],s[vt]);
				k--;	
			}
		}
		cout<<s<<endl;
	}
	return 0;
}

