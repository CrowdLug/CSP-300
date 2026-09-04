#include<iostream>
#include<vector>
#include<deque>

using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        bool flag=true;
        vector<int>a(n);
        deque<int>dq;
        deque<int>dq1;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            dq.push_back(a[i]);
            int t;
            cin>>t;
            dq1.push_back(t);
            while(!dq.empty()&&!dq1.empty()&&dq.back()==dq1.front()){
                dq.pop_back();
                dq1.pop_front();
            }
        } 
        if(dq.empty()){
                cout<<"Yes"<<endl;
            }
        else cout<<"No"<<endl;
    }
    return 0;
}