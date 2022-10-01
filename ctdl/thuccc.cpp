#include<bits/stdc++.h>
using namespace std;
long long mincoins(long long s[],int m,int v){
    if(v==0) return -1;
    int res=INT_MAX;
    for(int i=0;i<m;i++){
        if(s[i]<=v){
            int sub_res=mincoins(s,m,v-s[i]);
            if(sub_res!=INT_MAX&&sub_res+1<res)
            res=sub_res+1;
        }
    }
    return res;
}
int main(){
	long long n,k;
	cin>>n>>k;
	long long s[100000];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	cout<<mincoins(s,n,k);
	// if(res>0){
	// 	cout<<res;
	// }
	// else cout<<-1;
	return 0;
}

