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
	int j,t;
	for(int i=0;i<n;i++){
		j=i-1;
		t=s[i];
		while(j>=0&&t<s[j]){
			s[j+1]=s[j];
			j--;
		}
		s[j+1]=t;
		string x="Buoc ";
		x+=to_string(i);
		x+=":";
		for(int t=0;t<i+1;t++){
			x+=" ";
			x+=to_string(s[t]);
		}
		k.push_back(x);
	}
	for(int i=k.size()-1;i>=0;i--){
		cout<<k[i]<<endl;
	}
}

