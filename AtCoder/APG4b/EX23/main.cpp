#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, std::vector<long long> A) {
    sort(A.begin(), A.end());

    int x = -1;
    int cnt = 1;
    int ans_cnt = 1;
    int ans_val = A[0];
    for(int i = 0; i < N; i++) {
        if(x == A[i]) {
            cnt++;
            if(ans_cnt < cnt) {
                ans_cnt = cnt;
                ans_val = A[i];
            }
        } else {
            cnt = 1;
            x = A[i];
        }
    }
    cout << ans_val << " " << ans_cnt << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
