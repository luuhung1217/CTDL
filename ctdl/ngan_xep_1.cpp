#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int  kq[100],dem = -1;
    while(cin >> s){
        int n;
        if(s == "push"){
            cin >> n;
            dem ++;
            kq[dem] = n;
        }
        else if(s == "show"){
            if(dem >= 0){
                for(int i = 0; i <=dem ; i++){
                    cout<<kq[i]<<" ";
                }  
            }
            else{
                cout << "empty";
            }
            cout<<endl;
        }
        else if(s == "pop"){
            if(dem >= 0){
                dem--;
            } 
        }
        cout<<endl;
    }
}