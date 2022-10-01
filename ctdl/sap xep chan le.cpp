#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b){
	return a<b;
}
int main(){
	int n;
	cin>>n;
	long long s[100000];
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	long long s1[100000],dem1=0,s2[100000],dem2=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			s1[dem1]=s[i];
			dem1++;
		}
		else if(i%2!=0){
			s2[dem2]=s[i];
			dem2++;
		}
		
	}
	sort(s2,s2+dem2);
	sort(s1,s1+dem1,cmp);
	if(n%2!=0){
		for(int i=0;i<dem1;i++){
			cout<<s2[i]<<" "<<s1[dem1-1-i]<<" ";
		}
		cout<<s2[dem2-1];
	}
	else if(n%2==0){
		for(int i=0;i<dem1;i++){
			cout<<s2[i]<<" "<<s1[dem1-1-i]<<" ";
		}	
	}
	cout<<endl;
}


