#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        long long a[100000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long s[100000],dem=0,c[100000],count=1;
        for(int i=0;i<n;i++){
            while(a[i]>0){
                s[dem++]=a[i]%10;
                a[i]/=10;
            }
        }
        sort(s,s+dem);
        for(int i=0;i<dem;i++)
            c[i]=1;
        for(int i=0;i<dem;i++){
            count=1;
            if(c[i]==1){
                for(int j=i+1;j<dem;j++){
                    if(s[j]==s[i]){
                        count++;
                        c[j]=0;
                    }
                }
                if(count > 0){
                    cout<<s[i]<<" ";
                }
            }
            
        }
        cout<<endl;
    }
    system("pause");
}