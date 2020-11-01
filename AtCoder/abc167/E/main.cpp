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

mint choose(ll n, ll k)
{
    mint num = 1, den = 1;
    for (ll i = 1; i <= n; i++)
    {
        num *= i;
    }
    for (ll i = 1; i <= n - k; i++)
    {
        den *= i;
    }
    for (ll i = 1; i <= k; i++)
    {
        den *= i;
    }
    return num / den;
}
mint mypow(mint b, ll e)
{
    if (e == 0)
        return 1;
    if (e % 2 == 1)
    {
        return mypow(b * b, e / 2) * b;
    }
    else
    {
        return mypow(b * b, e / 2);
    }
}
void solve(long long N, long long M, long long K)
{
    mint ans = 0;
    mint cho = 1;
    mint p = mypow(M - 1, N - 1);

    for (ll i = 0; i <= K; i++)
    {
        ans += cho * p * M;
        cho *= (mint)(N - i - 1) / (i + 1);
        p /= (M - 1);
    }
    if (M == 1)
    {
        if (N - 1 == K)
            ans = 1;
        else
            ans = 0;
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    long long K;
    scanf("%lld", &K);
    solve(N, M, K);
    return 0;
}
