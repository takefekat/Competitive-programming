// スタックの勉強
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=ja
​
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
    using namespace std;
typedef long long ll;
typedef long double ld;
#include <ctype.h>

#include <algorithm>
#include <queue>
#include <stack>
​ int main() {
    string str_input;
    getline(cin, str_input);
    stack<ll> v_stack;
    ll acum = 0;
    ​ stringstream ss{str_input};
    string s;
    ​ ll accum = 0;
    ll tmp = 0;
    ​ while (getline(ss, s, ' ')) {
        if (isdigit(s)) {
            v_stack.push(atoi(s.c_str()));
        } else {
            if (s == "*") {
                accum = 0;
                accum = v_stack.top();
                v_stack.pop();
                tmp = 0;
                tmp = v_stack.top();
                accum = tmp * accum;
                v_stack.push(accum);
            } else if (s == "+") {
                accum = 0;
                accum = v_stack.top();
                v_stack.pop();
                accum += v_stack.top();
                v_stack.push(accum);
            } else if (s == "-") {
                accum = 0;
                tmp = 0;
                accum = v_stack.top();
                v_stack.pop();
                tmp = v_stack.top();
                accum = tmp - accum;
                v_stack.push(accum);
            }
        }
    }
    ​ cout << v_stack.top() << endl;
}
