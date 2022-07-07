#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, long long K, std::vector<long long> P) {
    priority_queue<ll> pq;
    for(ll i = 0; i < K; i++) {
        pq.push(P[i] * -1);
    }
    P.push_back(0);
    for(ll i = K - 1; i < N; i++) {
        cout << -1 * pq.top() << endl;
        if(pq.top() > P[i + 1] * -1) {
            pq.pop();
            pq.push(P[i + 1] * -1);
        }
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> P(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &P[i]);
    }
    solve(N, K, std::move(P));
    return 0;
}
