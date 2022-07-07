#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<long long> A,
           std::vector<long long> B) {
    map<ll, ll> pasta;
    for(auto&& e : A) {
        if(pasta.find(e) == pasta.end())
            pasta[e] = 1;
        else
            pasta[e] = pasta[e] + 1;
    }

    for(auto&& e : B) {
        if(pasta.find(e) == pasta.end() || pasta[e] <= 0) {
            cout << NO << endl;
            return;
        } else {
            pasta[e] = pasta[e] - 1;
        }
    }
    cout << YES << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> B(M);
    for(int i = 0; i < M; i++) {
        std::scanf("%lld", &B[i]);
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
