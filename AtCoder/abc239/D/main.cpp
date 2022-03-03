#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long A, long long B, long long C, long long D) {
    vll is_prime(300, true);
    is_prime[0] = is_prime[1] = false;
    for(ll i = 2; i < 300; i++) {
        if(is_prime[i]) {
            for(ll j = 2; i * j < 300; j++) {
                is_prime[i * j] = false;
            }
        }
    }

    string ans = "Aoki";
    for(ll T = A; T <= B; T++) {
        bool Twin = true;
        for(ll O = C; O <= D; O++) {
            if(is_prime[T + O]) {
                Twin = false;
                break;
            }
        }
        if(Twin) {
            ans = "Takahashi";
        }
    }
    cout << ans << endl;
}

int main() {
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    long long D;
    std::scanf("%lld", &D);
    solve(A, B, C, D);
    return 0;
}
