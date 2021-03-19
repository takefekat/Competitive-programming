#include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

// Segment Tree.
// 配列は1-indexed.
// ノード k の親ノードは k/2, 子ノードは 2k, 2k+1.
// ・SegmentTree(n, f, M1):= サイズ n の初期化。ここで f
// は2つの区間の要素をマージする二項演算, M1 はモノイドの単位元である。 ・set(k,
// x):= k 番目の要素に x を代入する。 ・build():= セグメント木を構築する。
// ・query(a, b):= 区間 [a,b) に対して二項演算した結果を返す。
// ・update(k, x):= k 番目の要素を x に変更する。
// ・operator[k] := k 番目の要素を返す。
// ・find_first(a, check) := [a,x) が check を満たす最初の要素位置 x を返す。
// ・find_last(b, check) := [x,b) が check を満たす最後の要素位置 x を返す。
template <typename Monoid>
struct SegmentTree {
    // 結合則を満たす二項演算 F
    using F = function<Monoid(Monoid, Monoid)>;

    // 配列サイズ. segのサイズは sz*2.
    int sz;
    vector<Monoid> seg;

    const F f;
    const Monoid M1;

    // コンストラクタ
    SegmentTree(int n, const F f, const Monoid &M1) : f(f), M1(M1) {
        // nを超える最小の2の冪乗
        sz = 1;
        while (sz < n) sz <<= 1;
        seg.assign(2 * sz, M1);
    }

    // ・set(k, x):= k 番目の要素に x を代入する。
    void set(int k, const Monoid &x) { seg[k + sz] = x; }

    // ・build():= セグメント木を構築する。
    void build() {
        for (int k = sz - 1; k > 0; k--) {
            seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
        }
    }

    // ・update(k, x):= k 番目の要素を x に変更する。
    void update(int k, const Monoid &x) {
        k += sz;
        seg[k] = x;
        while (k >>= 1) {
            seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
        }
    }

    // ・query(a, b):= 区間 [a,b) に対して二項演算した結果を返す。
    Monoid query(int a, int b) {
        Monoid L = M1, R = M1;
        for (a += sz, b += sz; a < b; a >>= 1, b >>= 1) {
            if (a & 1) L = f(L, seg[a++]);
            if (b & 1) R = f(seg[--b], R);
        }
        return f(L, R);
    }

    // ・operator[k] := k 番目の要素を返す。
    Monoid operator[](const int &k) const { return seg[k + sz]; }

    template <typename C>
    int find_subtree(int a, const C &check, Monoid &M, bool type) {
        while (a < sz) {
            Monoid nxt =
                type ? f(seg[2 * a + type], M) : f(M, seg[2 * a + type]);
            if (check(nxt))
                a = 2 * a + type;
            else
                M = nxt, a = 2 * a + 1 - type;
        }
        return a - sz;
    }

    // ・find_first(a, check) := [a,x) が check を満たす最初の要素位置 x
    // を返す。
    template <typename C>
    int find_first(int a, const C &check) {
        Monoid L = M1;
        if (a <= 0) {
            if (check(f(L, seg[1]))) return find_subtree(1, check, L, false);
            return -1;
        }
        int b = sz;
        for (a += sz, b += sz; a < b; a >>= 1, b >>= 1) {
            if (a & 1) {
                Monoid nxt = f(L, seg[a]);
                if (check(nxt)) return find_subtree(a, check, L, false);
                L = nxt;
                ++a;
            }
        }
        return -1;
    }

    // ・find_last(b, check) := [x,b) が check を満たす最後の要素位置 x を返す。
    template <typename C>
    int find_last(int b, const C &check) {
        Monoid R = M1;
        if (b >= sz) {
            if (check(f(seg[1], R))) return find_subtree(1, check, R, true);
            return -1;
        }
        int a = sz;
        for (b += sz; a < b; a >>= 1, b >>= 1) {
            if (b & 1) {
                Monoid nxt = f(seg[--b], R);
                if (check(nxt)) return find_subtree(b, check, R, true);
                R = nxt;
            }
        }
        return -1;
    }
};

int main() {
    ll N, M;
    cin >> N >> M;
    vll A(N);
    for (ll i = 0; i < N; i++) cin >> A[i];

    SegmentTree<ll> seg(
        N + 1, [](ll a, ll b) { return min(a, b); }, 1LL << 60);

    for (ll i = 0; i < N; i++) seg.update(i, 0);
    for (ll i = 0; i < M - 1; i++) seg.update(A[i], seg[A[i]] + 1);

    ll ans = 1LL << 60;
    for (ll i = 0; i < N - M + 1; i++) {
        // 末尾を追加
        seg.update(A[i + M - 1], seg[A[i + M - 1]] + 1);

        ll l = 0, r = M + 1;
        while (r - l > 1) {
            ll m = l + (r - l) / 2;
            if (seg.query(0, m) == 0)
                r = m;
            else
                l = m;
        }
        ans = min(ans, l);

        // debug
        /*
        for (ll i = 0; i < M; i++) {
            cout << seg[i] << " ";
        }
        cout << endl;
  */
        // 先頭を削除
        seg.update(A[i], max(0LL, (ll)seg[A[i]] - 1));
    }
    cout << ans << endl;
}