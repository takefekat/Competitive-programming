#include <iostream>
#include <queue>
using namespace std;

int main() {
    int a[4] = {10, 30, 20, 30};
    queue<int> q;
    for(int i = 0; i < 4; ++i) q.push(a[i]);
    while(q.size() > 0) {
        cout << q.front() << endl;  // 10, 30, 20, 30 の順
        q.pop();
    }
    return 0;
}