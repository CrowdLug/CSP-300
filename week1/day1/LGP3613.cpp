#include<iostream>
#include<map>
using namespace std;
int n,q,p,k;
map<long long,int>b;
long long i,j;
int main(){
	cin>>n>>q;
	while(q--){
		cin>>p>>i>>j;
		if(p==1){
			cin>>k;
			b[i*1000000+j]=k;
		}
		else cout<<b[i*1000000+j]<<endl;
	}
	return 0;
}
