#include<iostream>
#include<string>
#include<stack>

using namespace std;

const int mod=1000;
int main(){
    string s;
    getline(cin,s);
    stack<int> st;
    bool flag=true;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch>='0' && ch<='9'){
            if(flag){st.push(ch-'0');
            flag=false;
            }
            else{
                int num=st.top();
                st.pop();
                num=(num*10+(ch-'0'))%mod;
                st.push(num);
                flag=false;
            }
        }
        if(ch=='+'){
            int num1=st.top();
            
        }
    }
    return 0;
}