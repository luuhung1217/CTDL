#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		long long s[100000];
		for(int i=0;i<N;i++){
			cin>>s[i];
		}
		long long min=1000000;
		for(int i=0;i<N-1;i++){
			for(int j=i+1;j<N;j++){
				if(abs(s[i]+s[j])<abs(min)){
					min=s[i]+s[j];
				}
			}
		}
		cout<<min<<endl;
	}
}

