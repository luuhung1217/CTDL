#include<bits/stdc++.h>
using namespace std;
void xuat(int s[],int n){
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int j,t;
	for(int i=0;i<n;i++){
		j=i-1;
		t=s[i];
		while(j>=0&&t<s[j]){
			s[j+1]=s[j];
			j--;
		}
		s[j+1]=t;
		cout<<"Buoc "<<i<<": ";
		xuat(s,i+1);
		cout<<endl;
	}
}

