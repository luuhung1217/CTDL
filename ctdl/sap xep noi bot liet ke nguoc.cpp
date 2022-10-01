#include<bits/stdc++.h>
using namespace std;
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
		vector<string>k;
		int i,j,tmp=0,check=0;
		for(i=0;i<n;i++){
			check=0;
			for(int j=0;j<n-1;j++){
				if(s[j]>s[j+1]){
					tmp=s[j];
					s[j]=s[j+1];
					s[j+1]=tmp;
					check=1;
				}
			}
			if(check==0) break;
			string x="Buoc ";
			x+=to_string(i+1);
			x+=":";
			for(int t=0;t<n;t++){
				x+=" ";
				x+=to_string(s[t]);
			}
			k.push_back(x);
		}
		for(int i=k.size()-1;i>=0;i--){
			cout<<k[i]<<endl;
		}
	}
}

