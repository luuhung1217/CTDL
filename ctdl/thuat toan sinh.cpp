#include<bits/stdc++.h>
using namespace std;
int a;
int s[100];
int tn(int s1[]){
	for(int i=1;i<=(a/2);i++){
		if(s1[i]!=s1[(a-i+1)]){
			return 0;
		}
	}
	return 1;
}
void lk(int n){
	int dem=0;
	if(n>a){
		for(int i=1;i<=a;i++)
			if(tn(s)){
		       cout<<s[i]; 
	    	   cout<<" ";
	    	   dem++;
	    	   if(dem==a){
	    	   		cout<<endl;
	    	   		dem=0;
	    	   }
			}
			return;
	}
	for(int i=0;i<=1;i++){
		s[n]=i;
		
		lk(n+1);
	}
}
int main(){
	cin>>a;
	lk(1);
}

