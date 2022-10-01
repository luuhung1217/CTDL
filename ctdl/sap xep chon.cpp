#include<bits/stdc++.h>
using namespace std;
void xuat(int s[],int n){
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
}
void sapxep(int s[],int n){
	int tmp,t;
	for(int i=0;i<n-1;i++){
		t=i;
		for(int j=i+1;j<n;j++)
			if(s[j]<s[t]) 
				t=j;
				tmp=s[t];
				s[t]=s[i];
				s[i]=tmp;
			cout<<"Buoc "<<i+1<<": ";
			xuat(s,n);
			cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	int s[n+5];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sapxep(s,n);
}

