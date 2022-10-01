#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int s,d;
        cin>>s>>d;
        if(9*d<s){
            cout<<-1;
        }
        else{
            vector<int>h;
            for(int i=0;i<d;i++){
                if(s>9){
                    h.push_back(9);
                    s-=9;
                }
                else{
                    h.push_back(s);
                    s=0;
                }
            }
            reverse(h.begin(),h.end());
            if(h.at(0)==0){
                h.at(0)=1;
                for(int i=1;i<h.size();i++){
                    if(h.at(i)!=0){
                        h.at(i)-=1;
                        break;
                    }
                }
            }
            for(int j:h){
                cout<<j;
            }
        }
        cout<<endl;
    }
}