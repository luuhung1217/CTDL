#include<bits/stdc++.h>
using namespace std;
struct hoatdong{
	int batdau,ketthuc;
}; 
bool kt(hoatdong x,hoatdong y){
	return x.ketthuc<y.ketthuc;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		hoatdong ds[100000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>ds[i].batdau>>ds[i].ketthuc;
		}
		sort(ds,ds+n,kt);
		int i=0;
		long long dem=1;
		for(int j=1;j<n;j++){
			if(ds[j].batdau>=ds[i].ketthuc){
				dem++;
				i=j;
			}
		}
		cout<<dem<<endl;
	}
}

