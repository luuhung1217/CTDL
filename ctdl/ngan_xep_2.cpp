#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin>>test;
    int kq[100], dem = -1;
    while(test--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int n;
            cin>>n;
            dem ++;
            kq[dem] = n;
        }
        else if(s == "POP"){
            if(dem >= 0){
                dem --;
            }
        }
        else if(s == "PRINT"){
            if(dem >= 0){
                cout << kq[dem];
            }
            else{
                cout << "NONE";
            }
        }
        cout<<endl;
    }
}