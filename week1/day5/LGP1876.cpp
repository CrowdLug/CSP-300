#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int cnt=0;
    getline(cin,s);
    for(char ch:s){
        if(ch==' ') cnt++;
        if(ch=='a'||ch=='d'||ch=='g'||ch=='j'||ch=='m'||ch=='p'||ch=='t'||ch=='w') cnt++;
        if(ch=='b'||ch=='e'||ch=='h'||ch=='k'||ch=='n'||ch=='q'||ch=='u'||ch=='x') cnt+=2;
        if(ch=='c'||ch=='f'||ch=='i'||ch=='l'||ch=='o'||ch=='r'||ch=='v'||ch=='y') cnt+=3;
        if(ch=='s'||ch=='z') cnt+=4;
    }
    cout<<cnt<<endl;
    return 0;
}