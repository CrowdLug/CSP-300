#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    for(char ch:s){
        if(ch>='a'&&ch<='z'){
            cout<<char(ch-32);
        }
        else{
            cout<<ch;
        }
    }
    cout<<endl;
    return 0;
}