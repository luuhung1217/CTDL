#include<bits/stdc++.h>
using namespace std;
int s[25],k[25];
string x;
void in(int n){
	for(int i=1;i<=n;i++)
	    cout<<x[s[i]-1];
	    cout<<" ";
}
void hoanvi(int a,int n){
	if(a>n) in(n);
	for(int i=1;i<=n;i++)
	    if(k[i]==0){
	    	s[a]=i;
			k[i]=1;
	    	hoanvi(a+1,n);
	    	k[i]=0;
		}	
}
int main (){
     int c;
     cin>>c;
     while(c--){
     	cin>>x;
     	int n=x.size();
     	for(int i=1;i<=20;i++)
     	    k[i]=0;
     	hoanvi(1,n);
     	cout<<endl;
	 }
}

