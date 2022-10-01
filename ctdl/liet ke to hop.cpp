#include<bits/stdc++.h>
using namespace std;
void xuat(int s[],int k,int B[]){
	for(int j=1;j<=k;j++){
		cout<<B[s[j]]<<" ";
	}
		cout<<endl;
}
void tohop(int n,int k,int B[]){
	int s[100];
	for(int i=1;i<=k;i++){
		s[i]=i;
	} 
	int check=1;
	while(check){
		xuat(s,k,B);
		int i=k;
		while(i>0&&s[i]>=n-k+i) i--;
		if(i>0){
			s[i]=s[i]+1;
			for(int j=i+1;j<=k;j++)
				s[j]=s[i]+j-i;	
		}
		else check=0;
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	int s1[n];
	set<int>x;
	for(int i=1;i<=n;i++){
		cin>>s1[i];
		x.insert(s1[i]);
	}
	int B[x.size()];
	int j=1;
	for(int i:x){
		B[j]=i;
		j++;
	}
	tohop(x.size(),k,B);
	return 0;
}

