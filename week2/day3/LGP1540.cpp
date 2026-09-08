#include<iostream>
#include<deque>

using namespace std;

int used[1005]={0};
int main(){
	int n,m;
	cin>>n>>m;
	deque<int> dq;
	int cnt=0;
	for(int i=0;i<m;i++){
		int t;
		cin>>t;
		if(used[t]){
			continue;
		}
		else{
			dq.push_back(t);
			used[t]=1;
			cnt++;
			if(dq.size()>n){
			used[dq.front()]=0;
			dq.pop_front();
			}
		}
	}
	cout<<cnt<<endl; 
	return 0;
} 
