#include<iostream>
#include<string>

using namespace std;

void translate(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
    }
}
int main(){
    string s;
    cin>>s;
    int cnt=0,index=-1;
    translate(s);
    getchar();
    string target;
    getline(cin,target);
    translate(target);
    for(int i = 0; i < target.size(); i++){
        if(target.size() - i < s.size()) break;
        if(i != 0 && target[i - 1] != ' ') continue;
        if(i + s.size() != target.size() && target[i + s.size()] != ' ') continue;
        if(target.substr(i, s.size()) != s) continue;
        cnt++;
        if(cnt == 1) index = i;
    }
    if(!cnt) cout<<-1<<endl;
    else cout<<cnt<<' '<<index<<endl;
    return 0;
}