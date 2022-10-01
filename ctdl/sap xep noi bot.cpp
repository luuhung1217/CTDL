#include<bits/stdc++.h>
using namespace std;
void xuat(int s[],int n){
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
	
	
}
void sapxep(int s[],int n){
	int check,tmp=0,i,j;
	for(i=0;i<n;i++){
		check=0;
		for(j=0;j<n-1;j++){
			if(s[j]>s[j+1]){
				 tmp=s[j]; 
					s[j]=s[j+1];
					s[j+1]=tmp;
					check=1;
			}
		}
		if(check==0) break;
		cout<<"Buoc "<<i+1<<": ";
		xuat(s,n);
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int s[100000];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sapxep(s,n);
	return 0;
}

