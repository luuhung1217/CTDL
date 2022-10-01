#include<bits/stdc++.h>
using namespace std;
int a[20];
void in(int k){
	string s="";
	for(int i=1;i<=k;i++)
		s+=a[i]+64;
	cout << s << endl;
}
void Try(int i, int n, int k){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in(k);
		}
		else 
			Try(i+1,n,k);
	}
}
int main(){
    int k;
    string s;
    cin >> s >> k;
    int n=s[0]-64;
    Try(1,n,k);
    return 0;
}