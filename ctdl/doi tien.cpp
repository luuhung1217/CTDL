#include<bits/stdc++.h>
using namespace std;
int min(int n){
	int s[]={1000,500,200,100,50,20,10,5,2,1};
	int count=0;
	for(int i=0;i<10;i++){
		while(n>=s[i]){
			n-=s[i];
			count++;
		}
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int tien;
		cin>>tien;
		cout<<min(tien)<<endl;;
	} 
}

