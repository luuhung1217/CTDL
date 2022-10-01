#include<bits/stdc++.h>
using namespace std;
int res;
int bien[100],s[100][100];
bool hang[100],cot[100],cheoxuoi[100],cheonguoc[100];
void Try(int i){
	for(int j=1;j<=8;j++){
		if(!hang[j]&&!cot[j]&&!cheoxuoi[i+j-1]&&!cheonguoc[i-j+8]){
            bien[i]=j;
			hang[j]=cot[j]=cheoxuoi[i+j-1]=cheonguoc[i-j+8]=true;
			if(i==8){
                int ans=0;
				for(int t=1;t<=8;t++){
                    ans+=s[t][bien[t]];
                }
				res=max(res,ans);
			}
			else Try(i+1);
			hang[j]=cot[j]=cheoxuoi[i+j-1]=cheonguoc[i-j+8]=false; 
		}
	}
}
int main(){
	int test;
	cin>>test;
	for(int t=1;t<=test;t++){
		for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cin>>s[i][j];
            }
        }
        // for(int i=0;i<11;i++){
        //     hang[i]=cot[i]=false;
        // }
        // for(int i=0;i<22;i++){
        //     cheonguoc[i]=cheoxuoi[i]=false;
        // }
		Try(1);
		cout<<"Test "<<t<<": "<<res<<endl;
		res=0;
	}
}

