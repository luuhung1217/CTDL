#include<bits/stdc++.h>
using namespace std;
vector<string>res;
void tohop(int n,int k,string s1){
    int s[100];
    for(int i=1;i<=n;i++){
        s[i]=i;
    }
    int check=1;
    while(check){kiki   
        string h;
        for(int i=1;i<=k;i++){
            h+=s1[s[i]-1];
        }
        res.push_back(h);
        int i=k;
        while(i>0&&s[i]>=n-k+i) i--;
        if(i>0){
            s[i]+=1;
            for(int j=i+1;j<=k;j++){
                s[j]=s[i]+j-i;
            }
        }
        else check=0;
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        res.clear();
        string s;
        cin>>s;
        for(int i=1;i<=n;i++){
            tohop(n,i,s);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}