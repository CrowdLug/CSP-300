#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    deque<int> dq;
    deque<int> dq2;
    vector<int> a;
    vector<int> ans1;
    vector<int> ans2;
    for(int i=0;i<n;i++){
        int t;
        bool flag=false;
        cin>>t;
        a.push_back(t);
        if (!dq.empty()&&(i-dq.front())>=k)
            dq.pop_front();
        while(!dq.empty()&&a[dq.back()]<t){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1) ans1.push_back(a[dq.front()]);
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        if (!dq2.empty()&&(i-dq2.front())>=k)
            dq2.pop_front();
        while(!dq2.empty()&&a[dq2.back()]>a[i]){
            dq2.pop_back();       
        }
        dq2.push_back(i);
        if(i>=k-1) ans2.push_back(a[dq2.front()]);
    }    
    for(int i=0;i<ans2.size();i++){
        cout<<ans2[i]<<' ';
    }
    cout<<endl;
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<' ';
    }
    cout<<endl;
    return 0;
}