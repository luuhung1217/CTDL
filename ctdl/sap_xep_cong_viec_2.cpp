#include<bits/stdc++.h>
using namespace std;
struct Task{
    int jobID,deadline,profit;
};
bool cmp(Task a,Task b){
    return a.profit>b.profit;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        Task task[n];
        int max_deadline=1;
        for(int i=0;i<n;i++){
            cin>>task[i].jobID>>task[i].deadline>>task[i].profit;
            max_deadline=max(max_deadline,task[i].deadline);
        }
        sort(task,task+n,cmp);
        int done[max_deadline+1]={0};
        int best_profit=0,count=0;
        for(int i=0;i<n;i++){
            while(done[task[i].deadline]==1 && task[i].deadline>0){
                task[i].deadline--;
            }
            if(task[i].deadline>0){
                done[task[i].deadline]=1;
                best_profit+=task[i].profit;
                count++;
            }
        }
        cout<<count<<" "<<best_profit<<endl;
    }
}