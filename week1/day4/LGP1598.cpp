#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int hashmap[26] = {0};
int main(){
    int cur_most = 0;
    for(int i = 0; i < 4; i++){
        string s;
        getline(cin, s);
        for(char ch : s){
            if(ch >= 'A' && ch <= 'Z') {
                hashmap[ch - 'A']++;
                cur_most = max(cur_most, hashmap[ch - 'A']);
            }
        }
    }
    for(int i = 0; i <= cur_most; i++){
        if(i < cur_most){
            for(int j = 0; j < 26; j++){
                if(j) cout << ' ';
                if(hashmap[j] >= (cur_most - i)) cout << '*';
                else cout << ' ';   
            }
        } else {
            for(int j = 0; j < 26; j++){
                if(j) cout << ' ';
                cout << char(j + 'A');
            }
        }
        cout << endl;
    }
    return 0;
}