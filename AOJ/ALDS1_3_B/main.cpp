#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct process {
    string name;
    ll time;
};

int main() {
    ll n, q;
    cin >> n >> q;

    queue<process> qu;
    for (ll i = 0; i < n; i++) {
        string s;
        ll t;
        cin >> s >> t;
        qu.push({s, t});
    }

    ll total_time = 0;
    while (qu.size()) {
        process p = qu.top();
        qu.pop();

        if (p.time <= q) {
            total_time += p.time;
            cout << p.name << " " << total_time << endl;
        } else {
            total_time += q;
            p.time -= q;
            qu.push(p);
        }
    }
}