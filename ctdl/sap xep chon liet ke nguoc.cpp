#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s[100000];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	vector<string>k;
	int t,tmp;
	for(int i=0;i<n-1;i++){
		t=i;
		for(int j=i+1;j<n;j++)
			if(s[t]>s[j])
				t=j;
				tmp=s[t];
				s[t]=s[i];
				s[i]=tmp;
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

