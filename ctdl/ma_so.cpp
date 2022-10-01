#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
// void hoanvi(int a[],int n){
//     for(int i=1; i<= n;i++){
//         a[i] =i;
//     }
//     while(1){
//         vector<int>h;
//         for(int i=1;i<=n;i++){
//             h.push_back(a[i]);
//         }
//         res.push_back(h);
//         int i=n-1;
//         while( i> 0 && a[i] > a[i+1]){
//             i--;
//         }
//         if(i == 0){
//             return;
//         }
//         int k=n;
//         while(a[k] < a[i]) k--;
//         swap(a[i],a[k]);
//         int l=i+1,r=n;
//         while(l < r){
//             swap(a[l],a[r]);
//             l++;
//             r--;
//         }
//     }
// }
int n;
int s[10001],x[10001];
void hoanvi(int a){
	if(a>n){
        vector<int>h;
		for(int i=1;i<=n;i++)
			h.push_back(s[i]);
		res.push_back(h);
	}
	for(int i=1;i<=n;i++)
		if(x[i]==0){
			s[a]=i;
			x[i]=1;
			hoanvi(a+1);
			x[i]=0;
		}
}
int main(){
    
    cin >> n;
    // int so[100];
    // for(int i=1;i<=n;i++){
    //     so[i]=i;
    // }
    for(int i=0;i<=20;i++){
		x[i]=0;
	}
	hoanvi(1);
    
    // string s1="";
    // for(char i = 'A';i <= 'A'+n-1; i++){
    //     s1+=i;
    // }
    for(int i=0;i < res.size();i++){
        for(int j=0;j< res[i].size();j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
