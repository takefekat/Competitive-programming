#include <bits/stdc++.h>

#include <stack>
using namespace std;

typedef long long ll;

int main() {
    string c;
    stack<int> s;
    while (cin >> c) {
        if (c == "+" or c == "-" or c == "*") {
            ll a = s.top();
            s.pop();
            ll b = s.top();
            s.pop();

            ll res;
            if (c == "+") res = b + a;
            if (c == "-") res = b - a;
            if (c == "*") res = b * a;
            s.push(res);
        } else {
            s.push(stoi(c));
        }
    }
    cout << s.top() << endl;
}
