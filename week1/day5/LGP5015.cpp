#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int cnt=0;
    for(char ch:s){
        if(ch==' ') continue;
        else cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}