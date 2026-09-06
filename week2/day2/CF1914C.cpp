#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];        
        for(int i=0;i<n;i++) cin>>b[i];
        int suma=0,sumb=0,ans=0;
        for(int i=0;i<min(n,k);i++){
            suma+=a[i];
            sumb=max(sumb,b[i]);
            int remain=k-1-i;
            ans=max(ans,suma+remain*sumb);
        }
        cout<<ans<<endl;
    }
    return 0;
}