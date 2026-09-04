#include<iostream>
#include<vector>


using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<q;i++){
        int m;
        cin>>m;
        cout<<a[m-1]<<endl;
    }
    return 0;
}