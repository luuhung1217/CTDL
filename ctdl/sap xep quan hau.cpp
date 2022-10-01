#include<bits/stdc++.h>
using namespace std;
int n,dem;
bool hang[100],cot[100],cheoxuoi[100],cheonguoc[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!hang[j]&&!cot[j]&&!cheoxuoi[i+j-1]&&!cheonguoc[i-j+n]){
			hang[j]=cot[j]=cheoxuoi[i+j-1]=cheonguoc[i-j+n]=true;
			if(i==n){
				dem++;
				
			}
			else Try(i+1);
			hang[j]=cot[j]=cheoxuoi[i+j-1]=cheonguoc[i-j+n]=false; 
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		Try(1);
		cout<<dem<<endl;
		dem=0;
	}
}

