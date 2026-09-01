#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<deque>
using namespace std;

int main(){
    int q;
    cin>>q;
    vector<string>ans;
    while(q--){
        deque<int>a;
        deque<int>b;
        deque<int>c;
        int n;
        cin>>n;
        bool flag=true;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            c.push_back(t);
            b.push_back(a[i]);
            while(!b.empty() && b.back()==c.front()){
                b.pop_back();
                c.pop_front();
            }
        }
        flag=(b.empty());
        if(flag){
            ans.push_back("Yes");
        }
        else{
            ans.push_back("No");
        }
    }
    for(const string& a: ans){
        cout<<a<<endl;
    }
    return 0;
}