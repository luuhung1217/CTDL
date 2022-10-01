#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    int kq=0;
        kq=max({s[n-1]*s[n-2]*s[n-3], s[0]*s[1], s[0]*s[1]*s[n-1]});
    cout<<kq;
    return 0;
}