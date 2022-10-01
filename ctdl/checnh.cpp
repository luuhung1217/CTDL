#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void hoanvi(int a[],int n){
    for(int i=1; i<= n;i++){
        a[i] =i;
    }
    while(1){
        vector<int>h;
        for(int i=1;i<=n;i++){
            h.push_back(a[i]);
        }
        res.push_back(h);
        int i=n-1;
        while( i> 0 && a[i] > a[i+1]){
            i--;
        }
        if(i == 0){
            return;
        }
        int k=n;
        while(a[k] < a[i]) k--;
        swap(a[i],a[k]);
        int l=i+1,r=n;
        while(l < r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}
void tach(int n){
    int s[100],dem=0;
    while(n>0){
        s[dem++]=n%10;
        n/10;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    while(n--){
        
    }
}