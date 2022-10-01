#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        vector<char>h;
        for(int i=0;i<s.size();i++){
            h.push_back(s[i]);
        }
        reverse(h.begin(),h.end());
        int dem=0;
        int tmp=h.size();
        for(int i=0;i< tmp/2-1;i++){
            if(s[i]!=h[i]&&(s[i]==h[i+1]||s[i+1]==h[i])){
                dem++;
            }
            else{
                dem--;
            }
        }
        cout<<dem<<endl;
    }
}