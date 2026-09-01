#include<iostream>
#include<vector>
#include<string>
#include <utility>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>name(n);
    vector<vector<int>>score(n,vector<int>(3));
    int cur_max=0,cur_id=0;
    for(int i=0;i<n;i++){
        cin>>name[i]>>score[i][0]>>score[i][1]>>score[i][2];
        int sum=score[i][0]+score[i][1]+score[i][2];    
        if(sum>cur_max){
            cur_max=sum;
            cur_id=i;
        }
    }
    cout<<name[cur_id]<<" "<<score[cur_id][0]<<" "<<score[cur_id][1]<<" "<<score[cur_id][2]<<endl;
    return 0;
}