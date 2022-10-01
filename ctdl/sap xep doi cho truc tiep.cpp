#include<bits/stdc++.h>
using namespace std;
void xuat(int s[],int n){
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
}
void sapxep(int s[],int n){
	int tmp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i]>s[j]){
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		}
		cout<<"Buoc "<<i+1<<": ";
		xuat(s,n);
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sapxep(s,n);
}

