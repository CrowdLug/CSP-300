#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<char> st;
    for(char ch:s){
        if(ch=='('||ch==')'){
            if(!st.empty() && st.top()=='(' && ch==')'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        else continue;
    }
    if(st.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}