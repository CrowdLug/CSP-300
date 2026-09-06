#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<int> st;
    bool flag=false;
    for(char ch:s){
        if(ch=='@') break;
        if(ch=='.'){
            flag=false;
            continue;
        }
        if(ch>='0'&&ch<='9'){
            if(flag){
                if(!st.empty()){
                    int a=st.top();
                    st.pop();
                    st.push((a*10+(ch-'0')));
                }
                else{
                    st.push((ch-'0'));
                }
            }
            else{
                st.push((ch-'0'));
                flag=true;
            }
        }
        if(ch=='+'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push((a+b));
        }
        if(ch=='-'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push((b-a));
        }
        if(ch=='*'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push((a*b));
        }
        if(ch=='/'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            st.push((b/a));
        }
    }
    cout<<st.top()<<endl;
    return 0;
}