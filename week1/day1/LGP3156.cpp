#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int>ans;
    while(q--){
        int t;
        cin>>t;
        ans.push_back(a[t]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}