#include<bits/stdc++.h>
using namespace std;
void lonnhat(int s,int d){
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
void nhonhat(int s,int d){
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
int main(){
    int s,d;
    cin>>d>>s;
    if(9*d<s){
        cout<<-1<<" "<<-1;
    }
    else{
        nhonhat(s,d);
        cout<<" ";
        lonnhat(s,d);
    }
}