#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<bool> has(N + 1, true); 
    int teeth = N;
    while (Q--) {
        int T;
        cin >> T;
        if (has[T]) {
            has[T] = false;
            teeth--;
        } else {
            has[T] = true;
            teeth++;
        }
    }
    cout << teeth << endl;
    return 0;
}