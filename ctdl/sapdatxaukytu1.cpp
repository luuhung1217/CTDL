#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int dem1=0,k=0,dem[100];
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            k++;
            if(s[i]!=s[i+1]){
                dem[dem1]=k;
                dem1++;
                k=0;
            }
        }
        sort(dem,dem+dem1);
        int solan=dem[dem1-1];
        if(s.size()-solan>=solan-1){
            cout<<1;
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
    
}