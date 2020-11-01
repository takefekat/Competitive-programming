#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const long long MOD = 998244353;

// modint: mod 計算を int を扱うように扱える構造体
template <int MOD>
struct Fp
{
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD)
    {
        if (val < 0)
            val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator-() const noexcept
    {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator+(const Fp &r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator-(const Fp &r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator*(const Fp &r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator/(const Fp &r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp &operator+=(const Fp &r) noexcept
    {
        val += r.val;
        if (val >= MOD)
            val -= MOD;
        return *this;
    }
    constexpr Fp &operator-=(const Fp &r) noexcept
    {
        val -= r.val;
        if (val < 0)
            val += MOD;
        return *this;
    }
    constexpr Fp &operator*=(const Fp &r) noexcept
    {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp &operator/=(const Fp &r) noexcept
    {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b)
        {
            long long t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0)
            val += MOD;
        return *this;
    }
    constexpr bool operator==(const Fp &r) const noexcept
    {
        return this->val == r.val;
    }
    constexpr bool operator!=(const Fp &r) const noexcept
    {
        return this->val != r.val;
    }
    friend constexpr ostream &operator<<(ostream &os, const Fp<MOD> &x) noexcept
    {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept
    {
        if (n == 0)
            return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1)
            t = t * a;
        return t;
    }
};
using mint = Fp<MOD>;
void solve(long long N, long long K, std::vector<long long> L, std::vector<long long> R)
{

    vector<mint> dp(N + 1, 0);
    vector<mint> sum(N + 1, 0);
    dp[1] = 1;
    sum[1] = 1;
    for (ll i = 2; i <= N; i++)
    {
        for (ll j = 0; j < K; j++)
        {
            dp[i] += sum[max(0ll, i - L[j])] - sum[max(0ll, i - R[j] - 1)];
        }
        sum[i] = sum[i - 1] + dp[i];
    }
    cout << dp[N] << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> L(K);
    std::vector<long long> R(K);
    for (int i = 0; i < K; i++)
    {
        scanf("%lld", &L[i]);
        scanf("%lld", &R[i]);
    }
    solve(N, K, std::move(L), std::move(R));
    return 0;
}
