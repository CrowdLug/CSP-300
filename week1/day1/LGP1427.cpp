#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int t;
    while(cin>>t){
        if(t==0) break;
        ans.push_back(t);
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<' ';
    }
    return 0;
}