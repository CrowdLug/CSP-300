#include<iostream>
#include<string>

using namespace std;

void opt1(string&s,string t){
    for(char ch:t){
        s.push_back(ch);
    }
    for(char ch:s){
        cout<<ch;
    }
    cout<<endl;
}
void opt2(int left, int right, string& s) {
    string tmp;
    int end = min(left + right, (int)s.size()); 
    for (int i = left; i < end; i++) {
        cout << s[i];
        tmp.push_back(s[i]);
    }
    s = tmp;
    cout << endl;
}
void opt3(int index,string&s1,string&s2){
    s1.insert(index,s2);
    for(char ch:s1){
        cout<<ch;
    }
    cout<<endl;
}
int opt4(string s1,string s2){
    int index=-1;
    if(s1.size()<s2.size()){
        return index;
    }
    for(int i=0;i<s1.size()-s2.size()+1;i++){
        if(s1[i]==s2[0]){
            bool flag=true;
            for(int j=i+1;j<i+s2.size();j++){
                if(j-i>=s2.size()){
                    break;
                }
                if(s1[j]==s2[j-i]){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag){
                index=i;
                break;
            }
            else index=index;
        }
    }
    return index;
}
int main(){
    int q;
    cin>>q;
    string s;
    cin>>s;
    for(int i=0;i<q;i++){
        int opt;
        cin>>opt;
        if(opt==1){
            string t;
            cin>>t;
            opt1(s,t);
        }
        else if(opt==2){
            int left,right;
            cin>>left>>right;
            opt2(left,right,s);
        }
        else if(opt==3){
            int index;
            string s2;
            cin>>index>>s2;
            opt3(index,s,s2);
        }
        else if(opt==4){
            string s2;
            cin>>s2;
            cout<<opt4(s,s2)<<endl;
        }
    }
}