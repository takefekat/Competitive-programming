#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

template <typename Monoid>
struct SegmentTree
{
    // 結合則を満たす二項演算 F
    using F = function<Monoid(Monoid, Monoid)>;

    // 配列サイズ. segのサイズは sz*2.
    int sz;
    vector<Monoid> seg;

    const F f;
    const Monoid M1;

    // コンストラクタ
    SegmentTree(int n, const F f, const Monoid &M1) : f(f), M1(M1)
    {
        // nを超える最小の2の冪乗
        sz = 1;
        while (sz < n)
            sz <<= 1;
        seg.assign(2 * sz, M1);
    }

    // ・set(k, x):= k 番目の要素に x を代入する。
    void set(int k, const Monoid &x)
    {
        seg[k + sz] = x;
    }

    // ・build():= セグメント木を構築する。
    void build()
    {
        for (int k = sz - 1; k > 0; k--)
        {
            seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
        }
    }

    // ・update(k, x):= k 番目の要素を x に変更する。
    void update(int k, const Monoid &x)
    {
        k += sz;
        seg[k] = x;
        while (k >>= 1)
        {
            seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
        }
    }

    // ・query(a, b):= 区間 [a,b) に対して二項演算した結果を返す。
    Monoid query(int a, int b)
    {
        Monoid L = M1, R = M1;
        for (a += sz, b += sz; a < b; a >>= 1, b >>= 1)
        {
            if (a & 1)
                L = f(L, seg[a++]);
            if (b & 1)
                R = f(seg[--b], R);
        }
        return f(L, R);
    }

    // ・operator[k] := k 番目の要素を返す。
    Monoid operator[](const int &k) const
    {
        return seg[k + sz];
    }

    template <typename C>
    int find_subtree(int a, const C &check, Monoid &M, bool type)
    {
        while (a < sz)
        {
            Monoid nxt = type ? f(seg[2 * a + type], M) : f(M, seg[2 * a + type]);
            if (check(nxt))
                a = 2 * a + type;
            else
                M = nxt, a = 2 * a + 1 - type;
        }
        return a - sz;
    }

    // ・find_first(a, check) := [a,x) が check を満たす最初の要素位置 x を返す。
    template <typename C>
    int find_first(int a, const C &check)
    {
        Monoid L = M1;
        if (a <= 0)
        {
            if (check(f(L, seg[1])))
                return find_subtree(1, check, L, false);
            return -1;
        }
        int b = sz;
        for (a += sz, b += sz; a < b; a >>= 1, b >>= 1)
        {
            if (a & 1)
            {
                Monoid nxt = f(L, seg[a]);
                if (check(nxt))
                    return find_subtree(a, check, L, false);
                L = nxt;
                ++a;
            }
        }
        return -1;
    }

    // ・find_last(b, check) := [x,b) が check を満たす最後の要素位置 x を返す。
    template <typename C>
    int find_last(int b, const C &check)
    {
        Monoid R = M1;
        if (b >= sz)
        {
            if (check(f(seg[1], R)))
                return find_subtree(1, check, R, true);
            return -1;
        }
        int a = sz;
        for (b += sz; a < b; a >>= 1, b >>= 1)
        {
            if (b & 1)
            {
                Monoid nxt = f(seg[--b], R);
                if (check(nxt))
                    return find_subtree(b, check, R, true);
                R = nxt;
            }
        }
        return -1;
    }
};


void solve(long long N, std::vector<long long> A){
    
    ll ans = 0;
    for(ll l=0; l<N; l++) {
        ll x = A[l];
        for(ll r=l; r<N; r++) {
            x = min(x,A[r]);
            ans = max(ans,x*(r-l+1));
        }
    }
    cout << ans << endl;

}


int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
