#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct q{
	int a,b,c,zf;
	string d;
}a[1010];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].d>>a[i].a>>a[i].b>>a[i].c;
		a[i].zf=a[i].a+a[i].b+a[i].c;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(abs(a[i].a-a[j].a)<=5&&abs(a[i].b-a[j].b)<=5&&abs(a[i].c-a[j].c)<=5&&abs(a[i].zf-a[j].zf)<=10){
				if(a[i].d<a[j].d) cout<<a[i].d<<" "<<a[j].d<<endl;
				else cout<<a[j].d<<" "<<a[i].d<<endl;
			} 
		}
	}
	return 0;
}
