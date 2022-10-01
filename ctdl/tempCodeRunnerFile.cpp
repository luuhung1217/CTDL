#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        deque<string> de;
        deque<string> vt;
        de.push_front("6");
        de.push_front("8"); 
        while((de.back().size())<a){
            vt.push_back(de.back()); 
            de.push_front(de.back()+'6');
            de.push_front(de.back()+'8');
            de.pop_back();
        }
        while(de.size()){
            vt.push_back(de.back());
            de.pop_back();
        }
        
        while(vt.size()){
            cout<<vt.back()<<" ";
            vt.pop_back();
        }
        cout<<endl;
    }
    return 0;
}
