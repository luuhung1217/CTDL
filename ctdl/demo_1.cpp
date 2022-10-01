#include<bits/stdc++.h>
using namespace std;
int s[100];
int k;
int tn(int s1[]){
	for(int i = 1; i<=(k/2);i++){
		if(s1[i] != s1[k-i+1]){
			return 0;
		}
	}
	return 1;
}
void lk(int n){
	if(n > k){
		int dem=0;
		for(int i = 1;i <= k;i++){
			if(tn(s)){
				cout<<s[i];
				cout<<" ";
				dem ++;
				if(dem==k){
					cout<<endl;
					dem=0;
				}
			}
			
		}
		//return;	
	}
	else lk(n+1);
	for(int i = 0 ;i <= 1;i++){
		s[n] = i;
	}
	
	
}
int main(){
	
	cin >> k;
	lk(1);
}

