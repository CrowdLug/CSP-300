#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=char((s[i]-'a'+n)%26+'a');
    }
    cout<<s<<endl;
    return 0;
}