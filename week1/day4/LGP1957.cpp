#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string numToString(int x) {
    if (x == 0) return "0";
    string s;
    bool neg = false;
    if (x < 0) {
        neg = true;
        x = -x;
    }
    while (x > 0) {
        s.push_back(char('0' + x % 10));
        x /= 10;
    }
    if (neg) s.push_back('-');
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int n;
    cin >> n;
    char lastOp = 'a';
    while (n--) {
        string token;
        cin >> token;
        char op;
        int a, b;
        if (token == "a" || token == "b" || token == "c") {
            op = token[0];
            cin >> a >> b;
        } else {
            op = lastOp;
            a = stoi(token);
            cin >> b;
        }
        int ans;
        if (op == 'a') ans = a + b;
        else if (op == 'b') ans = a - b;
        else ans = a * b;
        char opSymbol = (op == 'a') ? '+' : (op == 'b') ? '-' : '*';
        string expr = numToString(a) + opSymbol + numToString(b) + "=" + numToString(ans);
        cout << expr << '\n' << expr.size() << '\n';
        lastOp = op;
    }
    return 0;
}