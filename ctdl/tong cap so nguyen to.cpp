#include<bits/stdc++.h>
using namespace std;
int nt(int N){
    if(N<2){
        return 0;
    }
    for(int i=2;i<=sqrt(N);i++){
        if(N%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int dem=0;
        for(int i=2;i<=N;i++){
            if(nt(i)&&nt(N-i)){
                dem++;
                cout<<i<<" "<<N-i;
                if(dem==1){
                	break;
                	dem=0;
				}
                
            }
        }
        if(dem==0){
            cout<<"-1";
        }
        cout<<endl;
    }
}
