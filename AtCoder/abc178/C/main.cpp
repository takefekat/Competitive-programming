#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const long long MOD = 1000000007;
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

void solve(long long N)
{

    if (N == 1)
    {
        cout << 0 << endl;
        return;
    }

    mint ans = 1;
    // 並べ方 N!
    for (ll i = 1; i <= N; i++)
    {
        //ans *= i;
    }
    // 値の決め方 10^(N)
    for (ll i = 0; i < N; i++)
    {
        ans *= 10;
    }

    // 0または9を含まないもの
    mint not0 = 1;
    for (ll i = 1; i <= N; i++)
    {
        //not0 *= i;
    }
    for (ll i = 0; i < N; i++)
    {
        not0 *= 9;
    }
    ans -= not0 * 2;

    // 0と9を含まないもの
    not0 = 1;
    for (ll i = 1; i <= N; i++)
    {
        //not0 *= i;
    }
    // 値 10^(N)
    for (ll i = 0; i < N; i++)
    {
        not0 *= 8;
    }
    ans += not0;
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
