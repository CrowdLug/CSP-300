#include<iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long c=1;
    while(c*c<=n){
        cout<<c*c<<' ';
        c++;
    }
    return 0;
}