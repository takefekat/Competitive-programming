#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 1000000007;

/********* example *********/
// modint: mod 計算を int を扱うように扱える構造体
template <int MOD>
struct Fp {
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator-() const noexcept { return val ? MOD - val : 0; }
    constexpr Fp operator+(const Fp &r) const noexcept {
        return Fp(*this) += r;
    }
    constexpr Fp operator-(const Fp &r) const noexcept {
        return Fp(*this) -= r;
    }
    constexpr Fp operator*(const Fp &r) const noexcept {
        return Fp(*this) *= r;
    }
    constexpr Fp operator/(const Fp &r) const noexcept {
        return Fp(*this) /= r;
    }
    constexpr Fp &operator+=(const Fp &r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp &operator-=(const Fp &r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp &operator*=(const Fp &r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp &operator/=(const Fp &r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator==(const Fp &r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator!=(const Fp &r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr ostream &operator<<(ostream &os,
                                         const Fp<MOD> &x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};
using mint = Fp<MOD>;

mint mypow(mint a, ll e) {
    if (e == 0) return 1;
    if (e % 2 == 0)
        return mypow(a * a, e / 2);
    else
        return mypow(a * a, e / 2) * a;
}

void solve(long long N, long long K) {
    if (N == 1) {
        cout << K << endl;
        return;
    }

    mint res = K * (K - 1);
    res *= mypow(K - 2, N - 2);
    cout << res << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    solve(N, K);
    return 0;
}
