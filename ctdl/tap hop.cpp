#include<bits/stdc++.h>
using namespace std;
struct taphop{
	int batdau,soluong,dich;
};
int main(){
	taphop a;
	taphop ds[1000];
	int dem=0;
	while(cin>>a.batdau>>a.soluong>>a.dich){
		ds[dem++]=a;
	}
	for(int i=0;i<dem-1;i++){
		long long count=0;
		int danhdau[1000],dem2=0;
		for(int j=1;j<=ds[i].batdau;j++){
			danhdau[j]=j;
		}
		while(1){
			int sum=0;
			for(int j=1;j<=ds[i].soluong;j++)
				sum+=danhdau[j];
			if(sum==ds[i].dich){
				count++;
			}
			int j=ds[i].soluong;
			while(j>0&&danhdau[j]>=ds[i].batdau-ds[i].soluong+j){
				j--;
			} 
			if(j==0){
				break;
			}
			danhdau[j]+=1;
			for(int t=j+1;t<=ds[i].soluong;t++){
				danhdau[t]=danhdau[j]+t-j;
			}
		}
		cout<<count<<endl;
	}
}
